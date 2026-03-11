/*
 * func-name: ?my_se_translator@structure_exception@Utility@Outpop@@CAXIPAU_EXCEPTION_POINTERS@@@Z
 * func-address: 0x10014ff0
 * callers: 0x1000aa00, 0x10014fe0
 * callees: 0x10014f60, 0x100155f0, 0x10015660, 0x100156d0, 0x10015740, 0x100157d0, 0x10015840, 0x100158b0, 0x10015920, 0x10015990, 0x10015a00, 0x10015a70, 0x10015ae0, 0x10015b50, 0x10015bc0, 0x10015c30, 0x10015ca0, 0x10015d10, 0x10015d80, 0x10019586
 */

void __cdecl __noreturn Outpop::Utility::structure_exception::my_se_translator(
        unsigned int a1,
        struct _EXCEPTION_POINTERS *a2)
{
  _BYTE v2[24]; // [esp+0h] [ebp-1D0h] BYREF
  _BYTE pExceptionObject[24]; // [esp+18h] [ebp-1B8h] BYREF
  _BYTE v4[24]; // [esp+30h] [ebp-1A0h] BYREF
  _BYTE v5[24]; // [esp+48h] [ebp-188h] BYREF
  _BYTE v6[24]; // [esp+60h] [ebp-170h] BYREF
  _BYTE v7[24]; // [esp+78h] [ebp-158h] BYREF
  _BYTE v8[24]; // [esp+90h] [ebp-140h] BYREF
  _BYTE v9[24]; // [esp+A8h] [ebp-128h] BYREF
  _BYTE v10[24]; // [esp+C0h] [ebp-110h] BYREF
  _BYTE v11[24]; // [esp+D8h] [ebp-F8h] BYREF
  _BYTE v12[24]; // [esp+F0h] [ebp-E0h] BYREF
  _BYTE v13[24]; // [esp+108h] [ebp-C8h] BYREF
  _BYTE v14[24]; // [esp+120h] [ebp-B0h] BYREF
  _BYTE v15[24]; // [esp+138h] [ebp-98h] BYREF
  _BYTE v16[24]; // [esp+150h] [ebp-80h] BYREF
  _BYTE v17[24]; // [esp+168h] [ebp-68h] BYREF
  _BYTE v18[24]; // [esp+180h] [ebp-50h] BYREF
  _BYTE v19[24]; // [esp+198h] [ebp-38h] BYREF
  _BYTE v20[32]; // [esp+1B0h] [ebp-20h] BYREF

  if ( a1 > 0xC0000005 )
  {
    switch ( a1 )
    {
      case 0xC0000006:
        Outpop::Utility::page_error::page_error((Outpop::Utility::page_error *)v9, a2->ExceptionRecord, 0);
        CxxThrowException(v9, (_ThrowInfo *)&_TI5_AVpage_error_Utility_Outpop__);
      case 0xC000001D:
        Outpop::Utility::illegal_instrument::illegal_instrument(
          (Outpop::Utility::illegal_instrument *)v5,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v5, (_ThrowInfo *)&_TI5_AVillegal_instrument_Utility_Outpop__);
      case 0xC0000025:
        Outpop::Utility::noncontinueable_error::noncontinueable_error(
          (Outpop::Utility::noncontinueable_error *)v13,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v13, (_ThrowInfo *)&_TI5_AVnoncontinueable_error_Utility_Outpop__);
      case 0xC0000026:
        Outpop::Utility::invalid_disposition::invalid_disposition(
          (Outpop::Utility::invalid_disposition *)v15,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v15, (_ThrowInfo *)&_TI5_AVinvalid_disposition_Utility_Outpop__);
      case 0xC000008C:
        Outpop::Utility::bounds_error::bounds_error((Outpop::Utility::bounds_error *)v19, a2->ExceptionRecord, 0);
        CxxThrowException(v19, (_ThrowInfo *)&_TI5_AVbounds_error_Utility_Outpop__);
      case 0xC000008D:
        Outpop::Utility::float_denormal_error::float_denormal_error(
          (Outpop::Utility::float_denormal_error *)v11,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v11, (_ThrowInfo *)&_TI5_AVfloat_denormal_error_Utility_Outpop__);
      case 0xC000008E:
        Outpop::Utility::float_divide_by_zero::float_divide_by_zero(
          (Outpop::Utility::float_divide_by_zero *)v2,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v2, (_ThrowInfo *)&_TI5_AVfloat_divide_by_zero_Utility_Outpop__);
      case 0xC000008F:
        Outpop::Utility::float_inexact_error::float_inexact_error(
          (Outpop::Utility::float_inexact_error *)v4,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v4, (_ThrowInfo *)&_TI5_AVfloat_inexact_error_Utility_Outpop__);
      case 0xC0000090:
        Outpop::Utility::float_invalid_operation::float_invalid_operation(
          (Outpop::Utility::float_invalid_operation *)v6,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v6, (_ThrowInfo *)&_TI5_AVfloat_invalid_operation_Utility_Outpop__);
      case 0xC0000091:
        Outpop::Utility::float_overflow_error::float_overflow_error(
          (Outpop::Utility::float_overflow_error *)v8,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v8, (_ThrowInfo *)&_TI5_AVfloat_overflow_error_Utility_Outpop__);
      case 0xC0000092:
        Outpop::Utility::float_stack_error::float_stack_error(
          (Outpop::Utility::float_stack_error *)v12,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v12, (_ThrowInfo *)&_TI5_AVfloat_stack_error_Utility_Outpop__);
      case 0xC0000093:
        Outpop::Utility::float_underflow_error::float_underflow_error(
          (Outpop::Utility::float_underflow_error *)v10,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v10, (_ThrowInfo *)&_TI5_AVfloat_underflow_error_Utility_Outpop__);
      case 0xC0000094:
        Outpop::Utility::integer_divide_by_zero::integer_divide_by_zero(
          (Outpop::Utility::integer_divide_by_zero *)v14,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v14, (_ThrowInfo *)&_TI5_AVinteger_divide_by_zero_Utility_Outpop__);
      case 0xC0000095:
        Outpop::Utility::integer_overflow_error::integer_overflow_error(
          (Outpop::Utility::integer_overflow_error *)v16,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v16, (_ThrowInfo *)&_TI5_AVinteger_overflow_error_Utility_Outpop__);
      case 0xC0000096:
        Outpop::Utility::priv_instruction::priv_instruction(
          (Outpop::Utility::priv_instruction *)v7,
          a2->ExceptionRecord,
          0);
        CxxThrowException(v7, (_ThrowInfo *)&_TI5_AVpriv_instruction_Utility_Outpop__);
      case 0xC00000FD:
        Outpop::Utility::stack_overflow::stack_overflow((Outpop::Utility::stack_overflow *)v17, a2->ExceptionRecord, 0);
        CxxThrowException(v17, (_ThrowInfo *)&_TI5_AVstack_overflow_Utility_Outpop__);
      default:
        break;
    }
  }
  else
  {
    if ( a1 == -1073741819 )
    {
      Outpop::Utility::access_violation::access_violation(
        (Outpop::Utility::access_violation *)v20,
        a2->ExceptionRecord,
        0);
      CxxThrowException(v20, (_ThrowInfo *)&_TI5_AVaccess_violation_Utility_Outpop__);
    }
    if ( a1 == -2147483646 )
    {
      Outpop::Utility::datatype_misalignment::datatype_misalignment(
        (Outpop::Utility::datatype_misalignment *)pExceptionObject,
        a2->ExceptionRecord,
        0);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVdatatype_misalignment_Utility_Outpop__);
    }
  }
  Outpop::Utility::structure_exception::structure_exception(
    (Outpop::Utility::structure_exception *)v18,
    a2->ExceptionRecord,
    "unknown structure exception",
    0);
  CxxThrowException(v18, (_ThrowInfo *)&_TI3_AVstructure_exception_Utility_Outpop__);
}
