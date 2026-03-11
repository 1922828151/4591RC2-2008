/*
 * func-name: ?EndPass@Shader@@QAEXXZ
 * func-address: 0x1011fd80
 * callers: 0x1005bd90, 0x1005cb50, 0x100678c0, 0x100a0810, 0x100e5360, 0x100f1010, 0x101077c0, 0x101282d0, 0x10128c50, 0x1012c590, 0x1012cad0, 0x1012d660, 0x1012e2b0, 0x10139150
 * callees: 0x1017eaef
 */

void __thiscall Shader::EndPass(Shader *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax

  v1 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 4) + 264))(*((_DWORD *)this + 4));
  if ( v1 < 0 )
  {
    v2 = *(_DWORD *)dword_11249F38;
    v3 = sub_1017EAEF(v1);
    (*(void (**)(void *, const char *, ...))(v2 + 4))(dword_11249F38, " Error: %s, in: effect->EndPass()", v3);
  }
}
