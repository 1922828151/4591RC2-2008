/*
 * func-name: ?Destroy@Model@@UAEXXZ
 * func-address: 0x100f4e90
 * callers: none
 * callees: 0x100901e0, 0x100f7830
 */

void __thiscall Model::Destroy(Model *this)
{
  char *v2; // edi
  int v3; // eax
  _DWORD v4[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (char *)this + 412;
  sub_100901E0((_DWORD *)this + 103);
  v4[1] = *((_DWORD *)v2 + 1);
  v4[0] = v2;
  sub_100F7830(9, v4);
  *((_DWORD *)this + 110) = 1;
  *((_DWORD *)this + 111) = 1;
  v3 = *((_DWORD *)this + 94);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 94));
    *((_DWORD *)this + 94) = 0;
  }
  StaticModel::Destroy(this);
}
