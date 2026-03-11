/*
 * func-name: sub_10025A40
 * func-address: 0x10025a40
 * callers: 0x10025540
 * callees: 0x10024d90, 0x1004e870
 */

_DWORD *__userpurge sub_10025A40@<eax>(int a1@<ebx>, _DWORD *a2, int a3, Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object *v4; // ebp
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(Outpop::Utility::Ref_Object ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = *a4;
  if ( a4 != *(Outpop::Utility::Ref_Object ***)(a1 + 4) )
  {
    *(_DWORD *)a4[1] = v4;
    *((_DWORD *)*a4 + 1) = a4[1];
    sub_10024D90(a4 + 2);
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
