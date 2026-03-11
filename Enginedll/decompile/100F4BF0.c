/*
 * func-name: sub_100F4BF0
 * func-address: 0x100f4bf0
 * callers: 0x100f4ca0, 0x100f4f50
 * callees: 0x100f1f20, 0x100f4a90, 0x10178182
 */

int __thiscall sub_100F4BF0(int **this, unsigned int a2)
{
  _DWORD *v3; // edi
  int v4; // esi
  int v6; // [esp+0h] [ebp-Ch]

  std::string::operator=(this + 14, a2);
  v3 = this + 4;
  D3DXFileCreate(this + 4);
  sub_100F1F20(this[4]);
  v4 = sub_100F4A90((int)this, (int)this, a2, 0, v6);
  if ( *v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
    *v3 = 0;
  }
  return v4;
}
