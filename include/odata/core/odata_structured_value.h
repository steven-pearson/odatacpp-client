//---------------------------------------------------------------------
// <copyright file="odata_structured_value.h" company="Microsoft">
//      Copyright (C) Microsoft Corporation. All rights reserved. See License.txt in the project root for license information.
// </copyright>
//---------------------------------------------------------------------

#pragma once

#include "odata/edm/odata_edm.h"
#include "odata/core/odata_value.h"
#include "odata/core/odata_primitive_value.h"

namespace odata { namespace core
{
class odata_collection_value;
class odata_entity_value;
class odata_complex_value;
class odata_enum_value;

class odata_structured_value : public odata_value
{
public:
	odata_structured_value(std::shared_ptr<::odata::edm::edm_named_type>type) : odata_value(type)
	{
	}

	odata_structured_value(std::shared_ptr<::odata::edm::edm_named_type>type, odata_property_map properties) 
		: m_properties(std::move(properties)), odata_value(type)
	{
		
	}

	virtual ~odata_structured_value(){}

    /// <summary>Returns a const reference to the property map.</summary>
    const odata_property_map& properties() const { return m_properties; }

	void set_properties(odata_property_map map)
	{
		m_properties = std::move(map);
	}

    /// <summary>Tells whether the structured object has a property of a given name.</summary>
    /// <param name="property_name">The name of the property</param>
    bool has_property(const ::utility::string_t& property_name) const
    {
        std::shared_ptr<odata_value> details;
        return m_properties.try_get(property_name, details);
    }

    /// <summary>Tells whether the structured object has a property of a given name.</summary>
    /// <param name="property_name">The name of the property</param>
	bool has_property(const ::utility::string_t& property_name, std::shared_ptr<::odata::edm::edm_named_type>& type) const
    {
        std::shared_ptr<odata_value> details;
        bool result = m_properties.try_get(property_name, details);
        if ( result )
        {
            type = details->get_value_type();
        }
        return result;
    }

	bool get_property_value(const ::utility::string_t& property_name, std::shared_ptr<odata_value>& property_value)
	{
		return m_properties.try_get(property_name, property_value);
	}

    template<typename T>
    bool try_get(const ::utility::string_t& property_name, T& value) const
    {
        return m_properties.try_get(property_name, value);
    }

	void set_value(const ::utility::string_t& property_name, float float_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::SINGLE(), ::odata::common::print_string(float_value));
	}

	void set_value(const ::utility::string_t& property_name, unsigned char ubyte_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::BYTE(), ::odata::common::print_string(ubyte_value));
	}

	void set_value(const ::utility::string_t& property_name, char byte_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::BYTE(), ::odata::common::print_string(byte_value));
	}

	void set_value(const ::utility::string_t& property_name, int32_t int32_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::INT32(), ::odata::common::print_string(int32_value));
	}

	void set_value(const ::utility::string_t& property_name, const std::vector<unsigned char>& binary_data)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::BINARY(), ::utility::conversions::to_base64(binary_data));
	}

	void set_value(const ::utility::string_t& property_name, bool boolean_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::BOOLEAN(), ::odata::common::print_string(boolean_value));
	}

	void set_value(const ::utility::string_t& property_name, ::utility::datetime datetime_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::DATETIMEOFFSET(), datetime_value.to_string(::utility::datetime::date_format::ISO_8601));
	}

	void set_value(const ::utility::string_t& property_name, ::utility::seconds duration_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::DURATION(), ::utility::timespan::seconds_to_xml_duration(duration_value));
	}

    void set_value(const ::utility::string_t& property_name, long double double_precision_value)
    {
        m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::LONGDOUBLE(), ::odata::common::print_string(double_precision_value));
    }
    
	void set_value(const ::utility::string_t& property_name, double double_precision_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::DOUBLE(), ::odata::common::print_string(double_precision_value));
	}

	void set_value(const ::utility::string_t& property_name, int64_t int64_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::INT64(), ::odata::common::print_string(int64_value));
	}

	void set_value(const ::utility::string_t& property_name, uint64_t u_int64_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::INT64(), ::odata::common::print_string(u_int64_value));
	}

	void set_value(const ::utility::string_t& property_name, int16_t int16_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::INT16(), ::odata::common::print_string(int16_value));
	}

	void set_value(const ::utility::string_t& property_name, const ::utility::char_t* string_value)
	{
		m_properties[property_name] = std::make_shared<odata_primitive_value>(::odata::edm::edm_primitive_type::STRING(), string_value);
	}

	void set_value(const ::utility::string_t& property_name, std::shared_ptr<odata_value> property_value)
	{
		m_properties[property_name] = property_value;
	}

	ODATACPP_CLIENT_API void set_value(const ::utility::string_t& property_name, std::shared_ptr<odata_primitive_value> property_value);

	ODATACPP_CLIENT_API void set_value(const ::utility::string_t& property_name, std::shared_ptr<odata_complex_value> property_value);

	ODATACPP_CLIENT_API void set_value(const ::utility::string_t& property_name, std::shared_ptr<odata_entity_value> property_value);

	ODATACPP_CLIENT_API void set_value(const ::utility::string_t& property_name, std::shared_ptr<odata_enum_value> property_value);

	ODATACPP_CLIENT_API void set_value(const ::utility::string_t& property_name, std::shared_ptr<odata_collection_value> property_value);

	ODATACPP_CLIENT_API void set_value(const ::utility::string_t& property_name, const ::utility::string_t& string_value);

    /// <summary>
    /// Removes a property from the structured object if it is present.
    /// </summary>
    /// <param name="string_value">A string representing the property value.</param>
    odata_structured_value& remove(const ::utility::string_t& property_name)
    {
        m_properties.erase(property_name);
        return *this;
    }

protected:
	odata_property_map             m_properties;
};

}}
