//---------------------------------------------------------------------
// <copyright file="odata_query_builder.h" company="Microsoft">
//      Copyright (C) Microsoft Corporation. All rights reserved. See License.txt in the project root for license information.
// </copyright>
//---------------------------------------------------------------------

#pragma once

#include "odata/codegen/odata_query_path.h"
#include "odata/common/utility.h"
#include "odata/edm/odata_edm.h"

namespace odata { namespace codegen {

class odata_query_builder : public std::enable_shared_from_this<odata_query_builder>
{
public:
	odata_query_builder(const ::utility::string_t& entity_set_name) 
	{
		m_root_query_path.reset(odata_query_path::creat_query_path(entity_set_name, true));
	}

	std::shared_ptr<odata_query_builder> top(int count)
	{
		m_root_query_path->top(count);
	
		return this->shared_from_this();
	}

	std::shared_ptr<odata_query_builder> skip(int count)
	{
		m_root_query_path->skip(count);

		return this->shared_from_this();
	}

	std::shared_ptr<odata_query_builder> key(const ::utility::string_t& key)
	{
		m_root_query_path->key(key);

		return this->shared_from_this();
	}

	std::shared_ptr<odata_query_builder> orderby(const ::utility::string_t& orderby_clause)
	{
		m_root_query_path->orderby(orderby_clause);

		return this->shared_from_this();
	}

	std::shared_ptr<odata_query_builder> filter(const ::utility::string_t& filter_clause)
	{
		m_root_query_path->filter(filter_clause);

		return this->shared_from_this();
	}

	std::shared_ptr<odata_query_builder> select(const ::utility::string_t& select_clause)
	{
		m_root_query_path->select(select_clause);

		return this->shared_from_this();
	}

	std::shared_ptr<odata_query_builder> expand(const ::utility::string_t& expand_path)
	{
		m_root_query_path->expand(expand_path);

		return this->shared_from_this();
	}

	std::shared_ptr<odata_query_builder> expand(odata_query_path* expand_path_item)
	{
		m_root_query_path->expand(expand_path_item);

		return this->shared_from_this();
	}

	::utility::string_t get_query_expression()
	{
		if (m_root_query_path)
		{
			return ::web::http::uri::encode_uri((m_root_query_path->evaluate_query_path()));
		}

		return U("");
	}

private:
	std::shared_ptr<odata_query_path> m_root_query_path;
};

}}
