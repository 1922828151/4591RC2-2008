/*
 * func-name: sub_1013F0B0
 * func-address: 0x1013f0b0
 * callers: 0x10002275
 * callees: 0x1000c3c9, 0x1001797c, 0x102c9d50, 0x102c9d62
 */

void __thiscall sub_1013F0B0(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        char a14,
        float a15,
        int a16)
{
  bool v17; // cf
  int v18; // eax
  _DWORD **v19; // esi
  int *v20; // eax
  int v21; // edi
  int v22; // ebp
  int v23; // [esp+10h] [ebp-4Ch] BYREF
  _BYTE v24[28]; // [esp+14h] [ebp-48h] BYREF
  float v25; // [esp+30h] [ebp-2Ch]
  float v26; // [esp+34h] [ebp-28h]
  float v27; // [esp+38h] [ebp-24h]
  float v28; // [esp+3Ch] [ebp-20h]
  float v29; // [esp+40h] [ebp-1Ch]
  char v30; // [esp+44h] [ebp-18h]
  float v31; // [esp+48h] [ebp-14h]
  int v32; // [esp+58h] [ebp-4h]

  v17 = this[3] < this[10];
  v32 = 0;
  if ( !v17 )
  {
    do
    {
      v18 = this[2];
      v19 = *(_DWORD ***)(v18 + 4);
      if ( v19 == (_DWORD **)v18 )
        _invalid_parameter_noinfo();
      if ( v19 == (_DWORD **)this[2] )
      {
        _invalid_parameter_noinfo();
        if ( v19 == (_DWORD **)this[2] )
          continue;
      }
      *v19[1] = *v19;
      (*v19)[1] = v19[1];
      std::string::~string(v19 + 3);
      operator delete(v19);
      --this[3];
    }
    while ( this[3] >= this[10] );
  }
  std::string::string(v24);
  v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  v23 = a16;
  LOBYTE(v32) = 1;
  std::string::operator=(v24, &a2);
  v25 = -a13;
  v26 = a9;
  v31 = a15;
  v27 = a10;
  v29 = a12;
  v20 = (int *)this[2];
  v28 = a11;
  v30 = a14;
  v21 = *v20;
  v22 = sub_1000C3C9(*v20, *(_DWORD *)(*v20 + 4), (int)&v23);
  sub_1001797C(1);
  *(_DWORD *)(v21 + 4) = v22;
  **(_DWORD **)(v22 + 4) = v22;
  LOBYTE(v32) = 0;
  std::string::~string(v24);
  v32 = -1;
  std::string::~string(&a2);
}
