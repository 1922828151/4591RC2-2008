/*
 * func-name: ?SetActivation@Effect_Base@@UAEX_N@Z_0
 * func-address: 0x1007ec30
 * callers: 0x10012080
 * callees: none
 */

void __thiscall Effect_Base::SetActivation(Effect_Base *this, int a2)
{
  float v3; // eax
  void (__stdcall *v4)(int); // edx
  int v5; // eax
  int v6; // eax

  v3 = *(float *)this;
  *((float *)this + 281) = 0.0;
  v4 = *(void (__stdcall **)(int))(LODWORD(v3) + 108);
  *((_BYTE *)this + 1064) = a2;
  v4(a2);
  v5 = *((_DWORD *)this + 263);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 20) = *((_DWORD *)this + 214);
    v6 = v5 + 20;
    *(_DWORD *)(v6 + 4) = *((_DWORD *)this + 215);
    *(_DWORD *)(v6 + 8) = *((_DWORD *)this + 216);
    qmemcpy((void *)(*((_DWORD *)this + 263) + 44), (char *)this + 868, 0x40u);
    *(_BYTE *)(*((_DWORD *)this + 263) + 172) = (_BYTE)a2 == 0;
  }
}
