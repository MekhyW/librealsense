// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2023 Intel Corporation. All Rights Reserved.

/*!
 * @file blob.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include <realdds/topics/blob/blob.h>
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

udds::blob::blob()
{
    // m_data com.eprosima.idl.parser.typecode.SequenceTypeCode@131276c2


}

udds::blob::~blob()
{
}

udds::blob::blob(
        const blob& x)
{
    m_data = x.m_data;
}

udds::blob::blob(
        blob&& x) noexcept 
{
    m_data = std::move(x.m_data);
}

udds::blob& udds::blob::operator =(
        const blob& x)
{

    m_data = x.m_data;

    return *this;
}

udds::blob& udds::blob::operator =(
        blob&& x) noexcept
{

    m_data = std::move(x.m_data);

    return *this;
}

bool udds::blob::operator ==(
        const blob& x) const
{

    return (m_data == x.m_data);
}

bool udds::blob::operator !=(
        const blob& x) const
{
    return !(*this == x);
}

size_t udds::blob::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t udds::blob::getCdrSerializedSize(
        const udds::blob& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    return current_alignment - initial_alignment;
}

void udds::blob::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data;
}

void udds::blob::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void udds::blob::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void udds::blob::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& udds::blob::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& udds::blob::data()
{
    return m_data;
}

size_t udds::blob::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool udds::blob::isKeyDefined()
{
    return false;
}

void udds::blob::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}
