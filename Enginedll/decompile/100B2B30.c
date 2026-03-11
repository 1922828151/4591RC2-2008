/*
 * func-name: ?NestToEdgeByDist@CTYDialog@@QAEXKJ@Z
 * func-address: 0x100b2b30
 * callers: none
 * callees: 0x100af0a0, 0x101189f0
 */

void __thiscall CTYDialog::NestToEdgeByDist(CTYDialog *this, char a2, int a3)
{
  struct RenderDevice *v4; // eax
  int v5; // edi
  struct RenderDevice *v6; // eax
  int v7; // ebp
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v4 = RenderDevice::Instance();
  v5 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 296))(v4);
  v6 = RenderDevice::Instance();
  v7 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 300))(v6);
  v8 = *((_DWORD *)this + 175);
  v9 = *((_DWORD *)this + 176);
  if ( (a2 & 1) != 0 )
  {
    *((_DWORD *)this + 173) = a3;
    CTYDialog::MoveNestedDialog(this);
  }
  if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)this + 174) = a3;
    CTYDialog::MoveNestedDialog(this);
  }
  if ( (a2 & 4) != 0 )
  {
    *((_DWORD *)this + 173) = v5 - v8 - a3;
    CTYDialog::MoveNestedDialog(this);
  }
  if ( (a2 & 8) != 0 )
  {
    *((_DWORD *)this + 174) = v7 - v9 - a3;
    CTYDialog::MoveNestedDialog(this);
  }
}
