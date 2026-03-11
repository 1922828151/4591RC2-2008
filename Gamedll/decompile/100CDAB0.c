/*
 * func-name: ?SetMaxTraceLine@TraceLineSystem@@UAEXH@Z_0
 * func-address: 0x100cdab0
 * callers: 0x100059e3
 * callees: 0x1000f75e, 0x1000fd53, 0x10018ebc
 */

void __thiscall TraceLineSystem::SetMaxTraceLine(TraceLineSystem *this, int a2)
{
  int v3; // eax
  int v4; // esi
  void (__thiscall **v5)(TraceLineSystem *, int); // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9[49]; // [esp-B8h] [ebp-D0h] BYREF
  float v10; // [esp+Ch] [ebp-Ch]
  double v11; // [esp+10h] [ebp-8h]

  if ( *((_DWORD *)this + 51) != a2 && a2 > 0 )
  {
    *((_DWORD *)this + 51) = a2;
    v10 = COERCE_FLOAT(v9);
    sub_1000FD53();
    sub_1000F75E(
      (char *)this + 176,
      a2,
      v9[0],
      v9[1],
      v9[2],
      v9[3],
      v9[4],
      v9[5],
      v9[6],
      v9[7],
      v9[8],
      v9[9],
      v9[10],
      v9[11],
      v9[12],
      v9[13],
      v9[14],
      v9[15],
      v9[16],
      v9[17],
      v9[18],
      v9[19],
      v9[20],
      v9[21],
      v9[22],
      v9[23],
      v9[24],
      v9[25],
      (void *)v9[26],
      v9[27],
      v9[28],
      v9[29],
      v9[30],
      v9[31],
      v9[32],
      v9[33],
      v9[34],
      v9[35],
      v9[36],
      v9[37],
      v9[38],
      v9[39],
      v9[40],
      v9[41],
      v9[42],
      v9[43],
      v9[44],
      v9[45]);
    v3 = *((_DWORD *)this + 51);
    if ( *((_BYTE *)this + 289) )
    {
      v4 = *((_DWORD *)this + 48);
      if ( v4 < v3 - 1 && v4 < v3 )
      {
        do
        {
          v5 = (void (__thiscall **)(TraceLineSystem *, int))(*(_DWORD *)this + 20);
          v6 = sub_10018EBC(v4);
          (*v5)(this, v6);
          v11 = *(float *)(sub_10018EBC(v4) + 64);
          v10 = (double)rand() / 32767.0 * v11;
          v7 = sub_10018EBC(v4++);
          *(float *)(v7 + 64) = v10;
        }
        while ( v4 < *((_DWORD *)this + 51) );
      }
      *((_DWORD *)this + 48) = *((_DWORD *)this + 51) - 1;
    }
    else
    {
      v8 = v3 - 1;
      if ( *((_DWORD *)this + 48) > v8 )
        *((_DWORD *)this + 48) = v8;
    }
  }
}
