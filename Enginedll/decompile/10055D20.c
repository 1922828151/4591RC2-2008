/*
 * func-name: sub_10055D20
 * func-address: 0x10055d20
 * callers: 0x100562d0, 0x100566a0
 * callees: 0x10055990, 0x1007ec70, 0x101189f0, 0x1011fdc0, 0x101218a0
 */

void __thiscall sub_10055D20(_DWORD *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax

  dword_10284770 = 0;
  dword_10284790 = 0;
  dword_10284784 = 0;
  dword_1028477C = 0;
  dword_10284774 = -1;
  dword_1028478C = -1;
  dword_1028476C = 0;
  dword_10284780 = -1;
  dword_10284778 = 0;
  dword_10284788 = 0;
  dword_10284768 = 0;
  if ( *((_DWORD *)Editor::Instance() + 57) )
  {
    v3 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v3 + 432))(v3, 8, 3);
  }
  else
  {
    v2 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v2 + 432))(v2, 8, 2);
  }
  sub_10055990(this, 0);
  if ( dword_10284790 )
  {
    if ( dword_10284770 )
    {
      Shader::UnbindHDRTarget(dword_10284770);
      Shader::End(dword_10284770);
      dword_10284774 = -1;
      dword_10284780 = -1;
    }
  }
}
