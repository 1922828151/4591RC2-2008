/*
 * func-name: ??0Mesh@@QAE@XZ
 * func-address: 0x100300f0
 * callers: none
 * callees: 0x10001440, 0x10009330, 0x10009550, 0x10012c20, 0x100e8d80
 */

Mesh *__thiscall Mesh::Mesh(Mesh *this)
{
  _DWORD *v2; // edi
  struct EditorVar *v3; // eax
  char v5; // [esp-60h] [ebp-ECh] BYREF
  int v6; // [esp-5Ch] [ebp-E8h]
  int v7; // [esp-58h] [ebp-E4h]
  int v8; // [esp-54h] [ebp-E0h]
  int v9; // [esp-50h] [ebp-DCh]
  int v10; // [esp-4Ch] [ebp-D8h]
  int v11; // [esp-48h] [ebp-D4h]
  int v12; // [esp-44h] [ebp-D0h]
  char v13; // [esp-40h] [ebp-CCh] BYREF
  int v14; // [esp-3Ch] [ebp-C8h]
  int v15; // [esp-38h] [ebp-C4h]
  int v16; // [esp-34h] [ebp-C0h]
  int v17; // [esp-30h] [ebp-BCh]
  int v18; // [esp-2Ch] [ebp-B8h]
  void *v19; // [esp-28h] [ebp-B4h]
  char v20; // [esp-24h] [ebp-B0h] BYREF
  int v21; // [esp-20h] [ebp-ACh]
  int v22; // [esp-1Ch] [ebp-A8h]
  int v23; // [esp-18h] [ebp-A4h]
  int v24; // [esp-14h] [ebp-A0h]
  int v25; // [esp-10h] [ebp-9Ch]
  int v26; // [esp-Ch] [ebp-98h]
  int v27; // [esp-8h] [ebp-94h]
  int v28; // [esp-4h] [ebp-90h]
  Mesh *v29; // [esp+10h] [ebp-7Ch]
  char *v30; // [esp+14h] [ebp-78h]
  char *v31; // [esp+18h] [ebp-74h]
  char *v32; // [esp+1Ch] [ebp-70h]
  _DWORD v33[24]; // [esp+20h] [ebp-6Ch] BYREF
  int v34; // [esp+88h] [ebp-4h]

  *(_DWORD *)this = &Mesh::`vftable';
  v29 = this;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  v34 = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  v2 = (_DWORD *)((char *)this + 68);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  PRTSettings::PRTSettings((Mesh *)((char *)this + 120));
  sub_10001440((float *)this + 605);
  *((_DWORD *)this + 616) = 0;
  *((_DWORD *)this + 617) = 0;
  *((_DWORD *)this + 618) = 0;
  *((_DWORD *)this + 620) = 0;
  *((_DWORD *)this + 621) = 0;
  *((_DWORD *)this + 622) = 0;
  *((float *)this + 624) = 0.0;
  v28 = 0;
  *((float *)this + 625) = 0.0;
  v27 = 1;
  *((float *)this + 626) = 0.0;
  *((float *)this + 627) = 0.0;
  *((float *)this + 628) = 0.0;
  v30 = &v20;
  *((float *)this + 629) = 0.0;
  *((float *)this + 630) = 0.0;
  v19 = &unk_101BAFFA;
  *((float *)this + 5) = 0.0;
  LOBYTE(v34) = 6;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 2524) = 0;
  std::string::string(&v20, v19);
  v31 = &v13;
  LOBYTE(v34) = 7;
  std::string::string(&v13, "General");
  v12 = (int)this + 2524;
  v32 = &v5;
  LOBYTE(v34) = 8;
  std::string::string(&v5, "Hidden");
  LOBYTE(v34) = 6;
  v3 = (struct EditorVar *)EditorVar::EditorVar(
                             v33,
                             v5,
                             v6,
                             v7,
                             v8,
                             v9,
                             v10,
                             v11,
                             v12,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             (int)v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28);
  LOBYTE(v34) = 9;
  std::vector<EditorVar>::push_back(v2, v3);
  LOBYTE(v34) = 6;
  EditorVar::~EditorVar((EditorVar *)v33);
  *((_DWORD *)this + 6) = 0;
  return this;
}
