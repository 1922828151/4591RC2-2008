/*
 * func-name: ?Initialize@BatchRenderer@@UAEXXZ
 * func-address: 0x10055500
 * callers: none
 * callees: 0x1000d9a0, 0x100553e0, 0x1005b1f0, 0x100971c0, 0x100a1d10, 0x100e31f0, 0x100e42b0, 0x100e68a0, 0x101189f0, 0x1017c0d0, 0x101a24ac, 0x101a2500, 0x101a2534
 */

void __thiscall BatchRenderer::Initialize(BatchRenderer *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  char v3; // al
  char v4; // al
  bool v5; // zf
  void *v6; // eax
  Material *v7; // eax
  Material *v8; // eax
  _DWORD *v9; // eax
  int v10; // edi
  void *v11; // eax
  void *v12; // ecx
  void *v13; // ebx
  void *v14; // ebp
  _DWORD *v15; // eax
  int v16; // edi
  int *v17; // esi
  int v18; // edi
  void *v19; // eax
  int v20; // eax
  char v21; // [esp-48h] [ebp-70h] BYREF
  int v22; // [esp-44h] [ebp-6Ch]
  int v23; // [esp-40h] [ebp-68h]
  int v24; // [esp-3Ch] [ebp-64h]
  int v25; // [esp-38h] [ebp-60h]
  int v26; // [esp-34h] [ebp-5Ch]
  void *v27; // [esp-30h] [ebp-58h]
  char v28; // [esp-2Ch] [ebp-54h] BYREF
  int v29; // [esp-28h] [ebp-50h]
  int v30; // [esp-24h] [ebp-4Ch]
  int v31; // [esp-20h] [ebp-48h]
  const char *v32; // [esp-1Ch] [ebp-44h]
  const char *v33; // [esp-18h] [ebp-40h]
  int v34; // [esp-14h] [ebp-3Ch]
  char *v35; // [esp+0h] [ebp-28h]
  int v36; // [esp+4h] [ebp-24h] BYREF
  int v37; // [esp+Ch] [ebp-1Ch] BYREF
  void *Destination; // [esp+10h] [ebp-18h]
  void *Source; // [esp+14h] [ebp-14h]
  int v40; // [esp+18h] [ebp-10h]
  struct _EXCEPTION_REGISTRATION_RECORD *v41; // [esp+1Ch] [ebp-Ch]
  void *v42; // [esp+20h] [ebp-8h]
  int v43; // [esp+24h] [ebp-4h]

  v43 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v42 = &loc_101A97DB;
  v41 = ExceptionList;
  if ( !*((_DWORD *)this + 263) )
  {
    v35 = &v28;
    std::string::string(&v28, &unk_101C096B);
    v36 = (int)&v21;
    v43 = 0;
    std::string::string(&v21, "EnableInstancing");
    LOBYTE(v43) = 1;
    Engine::Instance();
    v43 = -1;
    v3 = sub_1017C0D0(v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
    v36 = (int)&v28;
    v27 = &unk_101C0981;
    *((_BYTE *)this + 1044) = v3;
    std::string::string(&v28, v27);
    v35 = &v21;
    v43 = 2;
    std::string::string(&v21, "EnableDynamicInstancingData");
    LOBYTE(v43) = 3;
    Engine::Instance();
    v43 = -1;
    v4 = sub_1017C0D0(v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
    v5 = *((_BYTE *)this + 1044) == 0;
    *((_BYTE *)this + 1045) = v4;
    if ( v5 )
    {
      v34 = 64;
    }
    else
    {
      if ( *((float *)RenderDevice::Instance() + 412) < 2.0 )
        *((_DWORD *)this + 260) = 26;
      else
        *((_DWORD *)this + 260) = 64;
      v34 = (unsigned __int64)*((unsigned int *)this + 260) >> 26 != 0 ? -1 : *((_DWORD *)this + 260) << 6;
    }
    v6 = operator new(v34);
    v34 = 340;
    *((_DWORD *)this + 262) = v6;
    v7 = (Material *)operator new(v34);
    v36 = (int)v7;
    v43 = 4;
    if ( v7 )
      v8 = Material::Material(v7);
    else
      v8 = 0;
    LOBYTE(v34) = 0;
    v33 = "Black";
    v32 = "System.fx";
    v43 = -1;
    *((_DWORD *)this + 263) = v8;
    Material::Initialize(v8, v32, v33, v34);
    v36 = (int)&v28;
    std::string::string(&v28, "black");
    *((_DWORD *)this + 2) = Material::GetTechnique(v28, v29, v30, v31, v32, v33, v34);
    Destination = 0;
    Source = 0;
    v40 = 0;
    v43 = 5;
    sub_1005B1F0((int)&v37, (int)&unk_101C09D4);
    sub_1005B1F0((int)&v37, (int)&unk_101C09D0);
    sub_1005B1F0((int)&v37, (int)&unk_101C09C8);
    sub_1005B1F0((int)&v37, (int)&unk_101C09CC);
    sub_1005B1F0((int)&v37, (int)&unk_101C09C4);
    v9 = Destination;
    v10 = dword_10280BCC;
    if ( !Destination || dword_10280BCC >= (unsigned int)(((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
    {
      invalid_parameter_noinfo();
      v9 = Destination;
    }
    dword_10280B84 = v9[v10];
    sub_1000D9A0((int)&unk_10280BBC, (int)&v37);
    v11 = Source;
    v12 = Destination;
    byte_10280BD0 = 1;
    v13 = Source;
    if ( Destination > Source )
    {
      invalid_parameter_noinfo();
      v11 = Source;
      v12 = Destination;
    }
    v14 = v12;
    if ( v12 > v11 )
      invalid_parameter_noinfo();
    std::vector<Model *>::erase((int)&v36, (int)&v37, v14, (int)&v37, v13);
    sub_1005B1F0((int)&v37, (int)&unk_101C09D8);
    v15 = Destination;
    v16 = dword_10280C1C;
    if ( !Destination || dword_10280C1C >= (unsigned int)(((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
    {
      invalid_parameter_noinfo();
      v15 = Destination;
    }
    dword_10280BD4 = v15[v16];
    sub_1000D9A0((int)&unk_10280C0C, (int)&v37);
    v17 = (int *)((char *)this + 12);
    v18 = 256;
    do
    {
      v19 = operator new(0x11Cu);
      v36 = (int)v19;
      LOBYTE(v43) = 6;
      if ( v19 )
        v20 = sub_100553E0((int)v19);
      else
        v20 = 0;
      *v17++ = v20;
      --v18;
      LOBYTE(v43) = 5;
    }
    while ( v18 );
    if ( Destination )
      operator delete(Destination);
  }
}
