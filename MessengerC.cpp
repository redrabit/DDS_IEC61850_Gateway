// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p15
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:376


#include "MessengerC.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

StringArray_slice *
StringArray_dup (const StringArray_slice *_tao_src_array)
{
  StringArray_slice *_tao_dup_array =
    StringArray_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <StringArray_slice *> (0);
    }
  
  StringArray_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

StringArray_slice *
StringArray_alloc (void)
{
  StringArray_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO::String_Manager[100], 0);
  return retval;
}

void
StringArray_free (
    StringArray_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
StringArray_copy (
    StringArray_slice * _tao_to,
    const StringArray_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 100; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_BINARYCONTENTSTYPE_CS_)
#define _BINARYCONTENTSTYPE_CS_

BinaryContentsType::BinaryContentsType (void)
{}

BinaryContentsType::BinaryContentsType (
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Octet,
        100000
      >
    (length, buffer, release)
{}

BinaryContentsType::BinaryContentsType (
    const BinaryContentsType &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Octet,
        100000
      > (seq)
{}

BinaryContentsType::~BinaryContentsType (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const StringArray_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 100 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0].in ());
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    StringArray_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 100 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0].out ());
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_BinaryContentsType_CPP_
#define _TAO_CDR_OP_BinaryContentsType_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const BinaryContentsType &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    BinaryContentsType &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_BinaryContentsType_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::timespec &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.tv_sec) &&
    (strm << _tao_aggregate.tv_nsec);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::timespec &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.tv_sec) &&
    (strm >> _tao_aggregate.tv_nsec);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::Message &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.text.in ()) &&
    (strm << _tao_aggregate.count) &&
    (strm << _tao_aggregate.time_stamp) &&
    (strm << ::ACE_OutputCDR::from_char (_tao_aggregate.subject));
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::Message &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.text.out ()) &&
    (strm >> _tao_aggregate.count) &&
    (strm >> _tao_aggregate.time_stamp) &&
    (strm >> ::ACE_InputCDR::to_char (_tao_aggregate.subject));
}

TAO_END_VERSIONED_NAMESPACE_DECL


