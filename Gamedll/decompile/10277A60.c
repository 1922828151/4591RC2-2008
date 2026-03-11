/*
 * func-name: ?OnResolutionChange@CMiniWorldMapUI@@UAEXXZ_0
 * func-address: 0x10277a60
 * callers: 0x1000178f
 * callees: none
 */

void __thiscall CMiniWorldMapUI::OnResolutionChange(CMiniWorldMapUI *this)
{
  int v2; // eax

  v2 = RenderDevice::Instance(this);
  *((_DWORD *)this + 174) = -60 - *((_DWORD *)this + 176) + (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 300))(v2);
  CTYDialog::MoveNestedDialog(this);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 970) + 140))(*((_DWORD *)this + 970)) )
  {
    CTYDialog::NestToEdge(this, 4u);
    *((_DWORD *)this + 173) += 202;
    CTYDialog::MoveNestedDialog(this);
  }
  else
  {
    CTYDialog::NestToEdge(this, 4u);
  }
}
