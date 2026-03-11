/*
 * func-name: sub_10024FB0
 * func-address: 0x10024fb0
 * callers: 0x10024870, 0x10049b20
 * callees: 0x1004e870
 */

int __usercall sub_10024FB0@<eax>(int a1@<ebx>)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  int result; // eax
  bool v4; // zf
  _DWORD *v5; // edi

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
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(v2 + 3));
      result = operator delete(v2);
      v2 = v5;
    }
    while ( v5 != *(_DWORD **)(a1 + 4) );
  }
  return result;
}
