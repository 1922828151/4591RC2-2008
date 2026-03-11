/*
 * func-name: sub_1004A160
 * func-address: 0x1004a160
 * callers: 0x100486d0, 0x10048740, 0x10049d30, 0x1004dbd0
 * callees: 0x1004e870
 */

int __stdcall sub_1004A160(int a1)
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
      v6 = (Outpop::Utility::Ref_Object *)v2[9];
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
      std::string::~string(v2 + 2);
      result = operator delete(v2);
      v2 = v5;
    }
    while ( v5 != *(_DWORD **)(a1 + 4) );
  }
  return result;
}
