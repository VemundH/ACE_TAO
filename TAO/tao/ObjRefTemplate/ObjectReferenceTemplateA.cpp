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

#include "ObjectReferenceTemplate.h"
#include "tao/Null_RefCount_Policy.h"
#include "tao/TypeCode_Constants.h"
#include "tao/Alias_TypeCode.h"
#include "tao/Sequence_TypeCode.h"
#include "tao/String_TypeCode.h"
#include "tao/Value_TypeCode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be/be_visitor_typecode/value_typecode.cpp:32

static TAO::TypeCode::Value_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_PortableInterceptor_ObjectReferenceFactory = 0;

static TAO::TypeCode::Value<char const *,
                            CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Value_Field<char const *,
                                                       CORBA::TypeCode_ptr const *> const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_PortableInterceptor_ObjectReferenceFactory (
    CORBA::tk_value,
    "IDL:omg.org/PortableInterceptor/ObjectReferenceFactory:1.0",
    "ObjectReferenceFactory",
    CORBA::VM_ABSTRACT,
    &CORBA::_tc_null,
    _tao_fields_PortableInterceptor_ObjectReferenceFactory,
    0);
  
namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr const _tc_ObjectReferenceFactory =
    &_tao_tc_PortableInterceptor_ObjectReferenceFactory;
}



// TAO_IDL - Generated from
// be/be_visitor_typecode/value_typecode.cpp:32

static TAO::TypeCode::Value_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_PortableInterceptor_ObjectReferenceTemplate = 0;

static TAO::TypeCode::Value<char const *,
                            CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Value_Field<char const *,
                                                       CORBA::TypeCode_ptr const *> const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_PortableInterceptor_ObjectReferenceTemplate (
    CORBA::tk_value,
    "IDL:omg.org/PortableInterceptor/ObjectReferenceTemplate:1.0",
    "ObjectReferenceTemplate",
    CORBA::VM_ABSTRACT,
    &CORBA::_tc_null,
    _tao_fields_PortableInterceptor_ObjectReferenceTemplate,
    0);
  
namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr const _tc_ObjectReferenceTemplate =
    &_tao_tc_PortableInterceptor_ObjectReferenceTemplate;
}



// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:914

namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence<CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
      PortableInterceptor_ObjectReferenceTemplateSeq_0 (
        CORBA::tk_sequence,
        &PortableInterceptor::_tc_ObjectReferenceTemplate,
        0U);
      
    ::CORBA::TypeCode_ptr const tc_PortableInterceptor_ObjectReferenceTemplateSeq_0 =
      &PortableInterceptor_ObjectReferenceTemplateSeq_0;
    
  }
}

static TAO::TypeCode::Alias<char const *,
                            CORBA::TypeCode_ptr const *,
                            CORBA::tk_alias,
                            TAO::Null_RefCount_Policy>
  _tao_tc_PortableInterceptor_ObjectReferenceTemplateSeq (
    "IDL:omg.org/PortableInterceptor/ObjectReferenceTemplateSeq:1.0",
    "ObjectReferenceTemplateSeq",
    &TAO::TypeCode::tc_PortableInterceptor_ObjectReferenceTemplateSeq_0);
  
namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr const _tc_ObjectReferenceTemplateSeq =
    &_tao_tc_PortableInterceptor_ObjectReferenceTemplateSeq;
}



// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_cs.cpp:57

template<>
CORBA::Boolean
TAO::Any_Impl_T<PortableInterceptor::ObjectReferenceFactory>::to_value (
    CORBA::ValueBase *&_tao_elem
  ) const
{
  CORBA::add_ref (this->value_);
  _tao_elem = this->value_;
  return 1;
}
// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceFactory *_tao_elem
  )
{
  CORBA::add_ref (_tao_elem);
  _tao_any <<= &_tao_elem;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceFactory **_tao_elem
  )
{
  TAO::Any_Impl_T<PortableInterceptor::ObjectReferenceFactory>::insert (
      _tao_any,
      PortableInterceptor::ObjectReferenceFactory::_tao_any_destructor,
      PortableInterceptor::_tc_ObjectReferenceFactory,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceFactory *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<PortableInterceptor::ObjectReferenceFactory>::extract (
        _tao_any,
        PortableInterceptor::ObjectReferenceFactory::_tao_any_destructor,
        PortableInterceptor::_tc_ObjectReferenceFactory,
        _tao_elem
      );
}



// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_cs.cpp:57

template<>
CORBA::Boolean
TAO::Any_Impl_T<PortableInterceptor::ObjectReferenceTemplate>::to_value (
    CORBA::ValueBase *&_tao_elem
  ) const
{
  CORBA::add_ref (this->value_);
  _tao_elem = this->value_;
  return 1;
}
// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceTemplate *_tao_elem
  )
{
  CORBA::add_ref (_tao_elem);
  _tao_any <<= &_tao_elem;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceTemplate **_tao_elem
  )
{
  TAO::Any_Impl_T<PortableInterceptor::ObjectReferenceTemplate>::insert (
      _tao_any,
      PortableInterceptor::ObjectReferenceTemplate::_tao_any_destructor,
      PortableInterceptor::_tc_ObjectReferenceTemplate,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceTemplate *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<PortableInterceptor::ObjectReferenceTemplate>::extract (
        _tao_any,
        PortableInterceptor::ObjectReferenceTemplate::_tao_any_destructor,
        PortableInterceptor::_tc_ObjectReferenceTemplate,
        _tao_elem
      );
}



// TAO_IDL - Generated from 
// be/be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const PortableInterceptor::ObjectReferenceTemplateSeq &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ObjectReferenceTemplateSeq>::insert_copy (
      _tao_any,
      PortableInterceptor::ObjectReferenceTemplateSeq::_tao_any_destructor,
      TAO::TypeCode::tc_PortableInterceptor_ObjectReferenceTemplateSeq_0,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceTemplateSeq *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ObjectReferenceTemplateSeq>::insert (
      _tao_any,
      PortableInterceptor::ObjectReferenceTemplateSeq::_tao_any_destructor,
      TAO::TypeCode::tc_PortableInterceptor_ObjectReferenceTemplateSeq_0,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    PortableInterceptor::ObjectReferenceTemplateSeq *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const PortableInterceptor::ObjectReferenceTemplateSeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const PortableInterceptor::ObjectReferenceTemplateSeq *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<PortableInterceptor::ObjectReferenceTemplateSeq>::extract (
        _tao_any,
        PortableInterceptor::ObjectReferenceTemplateSeq::_tao_any_destructor,
        TAO::TypeCode::tc_PortableInterceptor_ObjectReferenceTemplateSeq_0,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Impl_T<
        PortableInterceptor::ObjectReferenceFactory
      >;

  template class
    TAO::Any_Impl_T<
        PortableInterceptor::ObjectReferenceTemplate
      >;

  template class
    TAO::Any_Dual_Impl_T<
        PortableInterceptor::ObjectReferenceTemplateSeq
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Impl_T< \
        PortableInterceptor::ObjectReferenceFactory \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        PortableInterceptor::ObjectReferenceTemplate \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        PortableInterceptor::ObjectReferenceTemplateSeq \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
