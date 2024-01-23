/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:48:14 by lamici            #+#    #+#             */
/*   Updated: 2023/10/31 11:09:14 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>

Array<T>::Array(void)
{
	this->_Array = new T[0]();
	this->_size = 0;
}

template <typename T>

Array<T>::~Array(void)
{
	delete[] this->_Array;
}

template <typename T>

Array<T>::Array(unsigned int num)
{
	this->_Array = new T[num]();
	this->_size = num;
}

template <typename T>

Array<T>::Array(const Array<T> &copy)
{
	this->_Array = new T[copy.size()];
	this->_size = copy.size();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_Array[i] = copy._Array[i];
}

template <typename T>

Array<T> &Array<T>::operator=(const Array<T> &copy)
{
	delete[] this->_Array;
	this->_Array = new T[copy.size()];
	this->_size = copy.size();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_Array[i] = copy._Array[i];
	return (*this);
}

template <typename T>

T &Array<T>::operator[](int index)
{
	if ((unsigned int)index >= _size || index < 0)
		throw std::exception();
	return (this->_Array[index]);
}

template <typename T>

const unsigned int	&Array<T>::size(void) const
{
	return (this->_size);
}