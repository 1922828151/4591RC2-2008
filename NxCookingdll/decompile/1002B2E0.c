/*
 * func-name: sub_1002B2E0
 * func-address: 0x1002b2e0
 * callers: 0x100239c0
 * callees: none
 */

char __thiscall sub_1002B2E0(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // esi
  char result; // al
  double v5; // st7
  unsigned int v6; // ebx
  double v7; // st6
  double v8; // st5
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  double v12; // rt0
  double v13; // st6
  double v14; // st7
  double v15; // st4
  double v16; // rt1
  double v17; // st4
  double v18; // st7
  double v19; // rt2
  double v20; // st7
  double v21; // st4
  double v22; // rtt
  double v23; // st4
  double v24; // rt0
  double v25; // st4
  double v26; // rt1
  double v27; // rt2
  double v28; // st7
  double v29; // st4
  double v30; // rtt
  double v31; // st4
  double v32; // st7
  double v33; // st4
  double v34; // rt0
  long double v35; // st3
  long double v36; // st3
  float v37; // [esp+8h] [ebp-1Ch]
  float v39; // [esp+18h] [ebp-Ch] BYREF
  float v40; // [esp+1Ch] [ebp-8h]
  float v41; // [esp+20h] [ebp-4h]
  unsigned int v42; // [esp+28h] [ebp+4h]

  v3 = this;
  *(_DWORD *)(this[1] + 4) = a2;
  *(_DWORD *)(this[1] + 8) = 6 * a2 * a2;
  result = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  if ( result )
  {
    v5 = (double)(a2 - 1) * 0.5;
    v6 = 0;
    v37 = v5;
    v7 = -1.0;
    v8 = 1.0;
    do
    {
      v9 = 0;
      if ( a2 )
      {
        v10 = a2 * a2 * v6;
        while ( 2 )
        {
          v11 = 0;
          v42 = v9 + v10;
          do
          {
            switch ( v6 )
            {
              case 0u:
              case 1u:
                if ( v6 )
                {
                  v13 = v8;
                }
                else
                {
                  v12 = v8;
                  v8 = v7;
                  v13 = v12;
                }
                v39 = v8;
                v14 = v13 / v5;
                v15 = v13 - (double)v11 * v14;
                v40 = v15;
                v16 = v15;
                v17 = v13 - v14 * (double)v9;
                v18 = v16;
                v41 = v17;
                break;
              case 2u:
              case 3u:
                if ( v6 == 2 )
                {
                  v19 = v8;
                  v8 = v7;
                  v13 = v19;
                }
                else
                {
                  v13 = v8;
                }
                v40 = v8;
                v20 = v13 / v5;
                v21 = v13 - (double)v11 * v20;
                v41 = v21;
                v22 = v21;
                v23 = v13 - v20 * (double)v9;
                v39 = v23;
                v24 = v23;
                v25 = v8;
                v8 = v24;
                v26 = v25;
                v17 = v22;
                v18 = v26;
                break;
              case 4u:
              case 5u:
                if ( v6 == 4 )
                {
                  v27 = v8;
                  v8 = v7;
                  v13 = v27;
                }
                else
                {
                  v13 = v8;
                }
                v41 = v8;
                v28 = v13 / v5;
                v29 = v13 - (double)v11 * v28;
                v39 = v29;
                v30 = v29;
                v31 = v13 - v28 * (double)v9;
                v40 = v31;
                v18 = v31;
                v17 = v8;
                v8 = v30;
                break;
              default:
                v32 = v8;
                v8 = v39;
                v33 = v32;
                v18 = v40;
                v34 = v33;
                v17 = v41;
                v13 = v34;
                break;
            }
            v35 = v17 * v17 + v18 * v18 + v8 * v8;
            if ( 0.0 != v35 )
            {
              v36 = v13 / sqrt(v35);
              v39 = v8 * v36;
              v40 = v18 * v36;
              v41 = v17 * v36;
            }
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, unsigned int, float *))(*this + 8))(this, v42, &v39) )
              return 0;
            v42 += a2;
            v5 = v37;
            v7 = -1.0;
            ++v11;
            v8 = 1.0;
          }
          while ( v11 < a2 );
          if ( ++v9 < a2 )
          {
            v10 = a2 * a2 * v6;
            continue;
          }
          break;
        }
        v3 = this;
      }
      ++v6;
    }
    while ( v6 < 6 );
    (*(void (__thiscall **)(_DWORD *))(*v3 + 12))(v3);
    return 1;
  }
  return result;
}
