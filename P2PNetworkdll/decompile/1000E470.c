/*
 * func-name: sub_1000E470
 * func-address: 0x1000e470
 * callers: 0x10002630, 0x10002f90, 0x100076e0, 0x10007760, 0x100079c0, 0x1000a9d0, 0x1000d950
 * callees: 0x10023306
 */

void __stdcall sub_1000E470(int a1)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  bool v3; // zf
  _DWORD *v4; // edi
  Outpop::Utility::Ref_Object *v5; // ecx

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      v5 = (Outpop::Utility::Ref_Object *)v2[9];
      if ( v5 )
        Outpop::Utility::Ref_Object::release(v5);
      std::string::~string(v2 + 2);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
}
