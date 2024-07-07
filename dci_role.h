#pragma once

#define ROLE(role) Get##role()
#define CAST_ROLE(ins, role)  static_cast<role&>(ins)

#define RPOTOTYPE_ROLE(role) role& Get##role()

#define USE_ROLE(role) virtual RPOTOTYPE_ROLE(role) = 0

#define IMPL_ROLE(role) RPOTOTYPE_ROLE(role) override \
{ \
	return static_cast<role&>(*this); \
}