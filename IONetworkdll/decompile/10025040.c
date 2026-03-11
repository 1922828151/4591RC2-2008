/*
 * func-name: sub_10025040
 * func-address: 0x10025040
 * callers: 0x10023520, 0x10023c40, 0x10024d70, 0x10024e20
 * callees: 0x1004e870
 */

int __stdcall sub_10025040(int a1)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  int result; // eax
  bool v4; // zf
  _DWORD *v5; // ebx
  Outpop::Utility::Ref_Object *v6; // ecx

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  result = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(result + 4) = result;
  v4 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v2;
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(v2 + 5));
      v6 = (Outpop::Utility::Ref_Object *)v2[3];
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
      result = operator delete(v2);
      v2 = v5;
    }
    while ( v5 != *(_DWORD **)(a1 + 4) );
  }
  return result;
}
