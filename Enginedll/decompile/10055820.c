/*
 * func-name: sub_10055820
 * func-address: 0x10055820
 * callers: 0x10055820, 0x10056380, 0x10056620, 0x1005db40, 0x100efe90, 0x100f04f0
 * callees: 0x10055820, 0x100579e0, 0x1005b3f0, 0x1013efb0, 0x1017a0b0, 0x101a2500
 */

void __thiscall sub_10055820(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int v2; // ebx
  _DWORD *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  void *v12; // edi

  v1 = this;
  v2 = 0;
  if ( this[63] )
  {
    v3 = this + 59;
    do
    {
      v4 = v3[3];
      if ( v4 > v4 + v3[4] )
        invalid_parameter_noinfo();
      v5 = v3[3];
      v6 = v2 + v4;
      if ( v6 > v5 + v3[4] || v6 < v5 )
        invalid_parameter_noinfo();
      v7 = v6 & 3;
      v8 = v6 >> 2;
      if ( v6 >= v3[3] + v3[4] )
      {
        invalid_parameter_noinfo();
        v7 = v6 & 3;
      }
      v9 = v3[2];
      if ( v9 <= v8 )
        v8 -= v9;
      if ( *(_DWORD **)(*(_DWORD *)(v3[1] + 4 * v8) + 4 * v7) != this )
      {
        v10 = sub_100579E0(v2);
        --*(_DWORD *)(*(_DWORD *)v10 + 16);
        if ( !*(_DWORD *)(*(_DWORD *)sub_100579E0(v2) + 16) )
        {
          v11 = (_DWORD *)sub_100579E0(v2);
          v12 = (void *)*v11;
          if ( *v11 )
          {
            sub_10055820(*v11);
            operator delete(v12);
          }
        }
      }
      ++v2;
    }
    while ( v2 < this[63] );
    v1 = this;
  }
  sub_1005B3F0(0, 0);
  sub_1013EFB0(v1 + 59);
  sub_1017A0B0(v1 + 41);
  if ( v1[20] )
    operator delete((void *)v1[20]);
  v1[20] = 0;
  v1[21] = 0;
  v1[22] = 0;
  std::string::~string(v1 + 6);
  if ( v1[1] )
    operator delete((void *)v1[1]);
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
}
