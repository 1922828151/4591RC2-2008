/*
 * func-name: ?CenterDialog@CTYDialog@@QAEX_N0@Z
 * func-address: 0x100b29f0
 * callers: 0x10149510, 0x10149580, 0x101495d0
 * callees: 0x100af0a0, 0x101189f0
 */

void __thiscall CTYDialog::CenterDialog(CTYDialog *this, bool a2, bool a3)
{
  struct RenderDevice *v4; // eax
  int v5; // edi
  struct RenderDevice *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  v4 = RenderDevice::Instance();
  v5 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 296))(v4);
  v6 = RenderDevice::Instance();
  v7 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 300))(v6);
  if ( a2 )
    v8 = (v5 - *((_DWORD *)this + 175)) / 2;
  else
    v8 = *((_DWORD *)this + 173);
  if ( a3 )
    v9 = (v7 - *((_DWORD *)this + 176)) / 2;
  else
    v9 = *((_DWORD *)this + 174);
  *((_DWORD *)this + 173) = v8;
  *((_DWORD *)this + 174) = v9;
  CTYDialog::MoveNestedDialog(this);
}
