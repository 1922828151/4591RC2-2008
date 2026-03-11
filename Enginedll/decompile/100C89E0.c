/*
 * func-name: ??0CPictureLabel@@QAE@HHHHHV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAVCREDialog@@W4_D3DBLEND@@2@Z
 * func-address: 0x100c89e0
 * callers: none
 * callees: 0x100bf690, 0x100c6ff0
 */

int __thiscall CPictureLabel::CPictureLabel(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        struct CREDialog *a14,
        int a15,
        int a16)
{
  int v17; // edx
  int v18; // eax
  void (__thiscall *v19)(int); // edx
  int v20; // edx
  void (__thiscall *v21)(int); // eax
  bool v22; // zf
  char v24; // [esp-20h] [ebp-3Ch] BYREF
  _DWORD *v25; // [esp-1Ch] [ebp-38h]
  int v26; // [esp-18h] [ebp-34h]
  int v27; // [esp-14h] [ebp-30h]
  int v28; // [esp-10h] [ebp-2Ch]
  int v29; // [esp-Ch] [ebp-28h]
  unsigned int v30; // [esp-8h] [ebp-24h]
  _DWORD *v31; // [esp-4h] [ebp-20h]
  int v32; // [esp+Ch] [ebp-10h]
  int v33; // [esp+18h] [ebp-4h]

  v32 = this;
  v33 = 0;
  CREControl::CREControl((CREControl *)this, a14);
  *(_DWORD *)this = &CPictureLabel::`vftable';
  *(_BYTE *)(this + 604) = 0;
  *(_DWORD *)(this + 576) = -1;
  LOBYTE(v33) = 1;
  *(_BYTE *)(this + 816) = 0;
  *(_DWORD *)(this + 788) = -1;
  std::wstring::wstring((void *)(this + 984));
  v17 = a16;
  *(_DWORD *)(this + 548) = a15;
  *(_DWORD *)(this + 552) = v17;
  *(_DWORD *)(this + 136) = a2;
  v18 = *(_DWORD *)this;
  *(_DWORD *)(this + 96) = a3;
  *(_DWORD *)(this + 100) = a4;
  v19 = *(void (__thiscall **)(int))(v18 + 164);
  LOBYTE(v33) = 2;
  *(_BYTE *)(this + 1012) = 0;
  *(_BYTE *)(this + 1013) = 0;
  *(_BYTE *)(this + 1032) = 0;
  *(_DWORD *)(this + 172) = 0;
  *(_DWORD *)(this + 168) = 0;
  *(_DWORD *)(this + 176) = 0;
  v19(this);
  v20 = *(_DWORD *)this;
  *(_DWORD *)(this + 104) = a5;
  v21 = *(void (__thiscall **)(int))(v20 + 164);
  *(_DWORD *)(this + 108) = a6;
  v21(this);
  v22 = a12 == 0;
  *(float *)(this + 560) = 1.0;
  *(_DWORD *)(this + 576) = -1;
  *(_DWORD *)(this + 788) = -1;
  *(_BYTE *)(this + 556) = 0;
  *(_BYTE *)(this + 1014) = 0;
  *(_DWORD *)(this + 572) = 0;
  *(_DWORD *)(this + 564) = -1;
  if ( !v22 )
  {
    v31 = 0;
    a14 = (struct CREDialog *)&v24;
    std::wstring::wstring(&v24, &a7);
    CPictureLabel::ChangeTexture(this, v24, v25, v26, v27, v28, v29, v30, v31);
  }
  v33 = -1;
  std::wstring::~wstring(&a7);
  return this;
}
