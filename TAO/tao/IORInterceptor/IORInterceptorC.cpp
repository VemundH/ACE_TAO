// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:302


#include "IORInterceptorC.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "IORInterceptorC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:60

// Arg traits specializations.
namespace TAO
{
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::IORInfo.

PortableInterceptor::IORInfo_ptr
TAO::Objref_Traits<PortableInterceptor::IORInfo>::tao_duplicate (
    PortableInterceptor::IORInfo_ptr p
  )
{
  return PortableInterceptor::IORInfo::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::IORInfo>::tao_release (
    PortableInterceptor::IORInfo_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::IORInfo_ptr
TAO::Objref_Traits<PortableInterceptor::IORInfo>::tao_nil (void)
{
  return PortableInterceptor::IORInfo::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::IORInfo>::tao_marshal (
    PortableInterceptor::IORInfo_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker *
(*PortableInterceptor__TAO_IORInfo_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

PortableInterceptor::IORInfo::IORInfo (void)
{}

PortableInterceptor::IORInfo::~IORInfo (void)
{}

PortableInterceptor::IORInfo_ptr
PortableInterceptor::IORInfo::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return IORInfo::_nil ();
    }

  IORInfo_ptr proxy =
    dynamic_cast<IORInfo_ptr> (_tao_objref);

  return IORInfo::_duplicate (proxy);
}

PortableInterceptor::IORInfo_ptr
PortableInterceptor::IORInfo::_duplicate (IORInfo_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

CORBA::Boolean
PortableInterceptor::IORInfo::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/PortableInterceptor/IORInfo:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* PortableInterceptor::IORInfo::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/IORInfo:1.0";
}

CORBA::Boolean
PortableInterceptor::IORInfo::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::IORInterceptor.

PortableInterceptor::IORInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::IORInterceptor>::tao_duplicate (
    PortableInterceptor::IORInterceptor_ptr p
  )
{
  return PortableInterceptor::IORInterceptor::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::IORInterceptor>::tao_release (
    PortableInterceptor::IORInterceptor_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::IORInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::IORInterceptor>::tao_nil (void)
{
  return PortableInterceptor::IORInterceptor::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::IORInterceptor>::tao_marshal (
    PortableInterceptor::IORInterceptor_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*PortableInterceptor__TAO_IORInterceptor_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

PortableInterceptor::IORInterceptor::IORInterceptor (void)
{}

PortableInterceptor::IORInterceptor::~IORInterceptor (void)
{}

PortableInterceptor::IORInterceptor_ptr
PortableInterceptor::IORInterceptor::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return IORInterceptor::_nil ();
    }
  
  IORInterceptor_ptr proxy =
    dynamic_cast<IORInterceptor_ptr> (_tao_objref);
  
  return IORInterceptor::_duplicate (proxy);
}

PortableInterceptor::IORInterceptor_ptr
PortableInterceptor::IORInterceptor::_duplicate (IORInterceptor_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

CORBA::Boolean
PortableInterceptor::IORInterceptor::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/PortableInterceptor/Interceptor:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/PortableInterceptor/IORInterceptor:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* PortableInterceptor::IORInterceptor::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/IORInterceptor:1.0";
}

CORBA::Boolean
PortableInterceptor::IORInterceptor::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// be/be_visitor_root/root.cpp:1702

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class TAO::Objref_Traits<PortableInterceptor::IORInterceptor>;

  template class
    TAO_Objref_Var_T<
        PortableInterceptor::IORInterceptor
      >;
  
  template class
    TAO_Objref_Out_T<
        PortableInterceptor::IORInterceptor
      >;

  template class TAO::Objref_Traits<PortableInterceptor::IORInfo>;

  template class
    TAO_Objref_Var_T<
        PortableInterceptor::IORInfo
      >;
  
  template class
    TAO_Objref_Out_T<
        PortableInterceptor::IORInfo
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate TAO::Objref_Traits<PortableInterceptor::IORInterceptor>

# pragma instantiate \
    TAO_Objref_Var_T< \
        PortableInterceptor::IORInterceptor
      >
  
# pragma instantiate \
    TAO_Objref_Out_T< \
        PortableInterceptor::IORInterceptor
      >

# pragma instantiate TAO::Objref_Traits<PortableInterceptor::IORInfo>

# pragma instantiate \
    TAO_Objref_Var_T< \
        PortableInterceptor::IORInfo
      >
  
# pragma instantiate \
    TAO_Objref_Out_T< \
        PortableInterceptor::IORInfo
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

