/*
 * func-name: ?AttachAnimSet@Model@@QAEHAAVAnimationSet@@@Z
 * func-address: 0x100f2d50
 * callers: none
 * callees: 0x1003e700, 0x100f1b70, 0x100f7930, 0x1010fd40, 0x1017eaef
 */

int __thiscall Model::AttachAnimSet(Model *this, struct AnimationSet *a2)
{
  int v3; // esi
  int v4; // edi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // ebp
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  char v15; // [esp+13h] [ebp-41h]
  int v16; // [esp+14h] [ebp-40h] BYREF
  unsigned int v17; // [esp+18h] [ebp-3Ch]
  int v18; // [esp+1Ch] [ebp-38h]
  int v19; // [esp+20h] [ebp-34h]
  char *v20; // [esp+24h] [ebp-30h]
  _BYTE v21[28]; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v22; // [esp+44h] [ebp-10h]
  int v23; // [esp+50h] [ebp-4h]

  v20 = (char *)a2 + 4;
  sub_1010FD40(&v16, (char *)a2 + 4);
  v3 = v16;
  v4 = *((_DWORD *)this + 104);
  if ( *(float *)&v16 == 0.0 || (Model *)v16 != (Model *)((char *)this + 412) )
    invalid_parameter_noinfo();
  if ( v17 == v4 )
  {
    if ( !*((_DWORD *)this + 94) )
      Model::InitializeAnimationSystem(this, (int)this, v4, 0);
    v6 = *((_DWORD *)this + 96);
    if ( v6 )
      v7 = (*((_DWORD *)this + 97) - v6) >> 4;
    else
      v7 = 0;
    LOBYTE(v19) = 0;
    sub_1003E700((_DWORD *)this + 95, v7 + 1, v16, v17, v18, v19);
    v8 = *((_DWORD *)this + 96);
    v15 = *((_BYTE *)a2 + 32);
    if ( !v8 || v7 >= (*((_DWORD *)this + 97) - v8) >> 4 )
      invalid_parameter_noinfo();
    v9 = 16 * v7;
    *(_BYTE *)(*((_DWORD *)this + 96) + 16 * v7) = v15;
    v10 = *((_DWORD *)this + 96);
    v16 = *((int *)a2 + 9);
    if ( !v10 || v7 >= (*((_DWORD *)this + 97) - v10) >> 4 )
      invalid_parameter_noinfo();
    *(float *)(*((_DWORD *)this + 96) + v9 + 4) = *(float *)&v16;
    v11 = *((_DWORD *)this + 96);
    if ( !v11 || v7 >= (*((_DWORD *)this + 97) - v11) >> 4 )
      invalid_parameter_noinfo();
    *(float *)(*((_DWORD *)this + 96) + v9 + 8) = -1.0e10;
    v12 = (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 94) + 32))(
            *((_DWORD *)this + 94),
            *((_DWORD *)a2 + 10));
    if ( v12 < 0 )
    {
      v13 = *(_DWORD *)dword_11249F38;
      v14 = sub_1017EAEF(v12);
      (*(void (**)(void *, const char *, ...))(v13 + 4))(
        dword_11249F38,
        " Error: %s, in: m_AnimationController->RegisterAnimationSet(set.GetDXSet())",
        v14);
    }
    std::string::string(v21, v20);
    v22 = v7;
    v23 = 0;
    sub_100F7930(&v16, v21);
    v23 = -1;
    std::string::~string(v21);
    return (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 94) + 40))(*((_DWORD *)this + 94)) - 1;
  }
  else
  {
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v17 == *(_DWORD *)(v3 + 4) )
      invalid_parameter_noinfo();
    return *(_DWORD *)(v17 + 36);
  }
}
