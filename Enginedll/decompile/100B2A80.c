/*
 * func-name: ?NestToEdge@CTYDialog@@QAEXK@Z
 * func-address: 0x100b2a80
 * callers: none
 * callees: 0x100af0a0, 0x101189f0
 */

void __thiscall CTYDialog::NestToEdge(CTYDialog *this, char a2)
{
  struct RenderDevice *v3; // eax
  int v4; // edi
  struct RenderDevice *v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // [esp+10h] [ebp-4h]

  v3 = RenderDevice::Instance();
  v4 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 296))(v3);
  v5 = RenderDevice::Instance();
  v6 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 300))(v5);
  v7 = *((_DWORD *)this + 175);
  v8 = v6;
  v9 = *((_DWORD *)this + 176);
  if ( (a2 & 1) != 0 )
  {
    *((_DWORD *)this + 173) = 0;
    CTYDialog::MoveNestedDialog(this);
  }
  if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)this + 174) = 0;
    CTYDialog::MoveNestedDialog(this);
  }
  if ( (a2 & 4) != 0 )
  {
    *((_DWORD *)this + 173) = v4 - v7;
    CTYDialog::MoveNestedDialog(this);
  }
  if ( (a2 & 8) != 0 )
  {
    *((_DWORD *)this + 174) = v8 - v9;
    CTYDialog::MoveNestedDialog(this);
  }
}
