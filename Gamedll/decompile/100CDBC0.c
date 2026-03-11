/*
 * func-name: ?FlushTraceLine@TraceLineSystem@@UAEXXZ_0
 * func-address: 0x100cdbc0
 * callers: 0x10003c9c
 * callees: 0x1000f75e, 0x1000fd53
 */

void __thiscall TraceLineSystem::FlushTraceLine(TraceLineSystem *this)
{
  int v2; // edx
  void (__thiscall *v3)(TraceLineSystem *, int); // eax
  int v4[45]; // [esp-B8h] [ebp-C0h] BYREF
  int v5; // [esp-4h] [ebp-Ch]
  int *v6; // [esp+4h] [ebp-4h]

  v6 = v4;
  sub_1000FD53();
  sub_1000F75E(
    (char *)this + 176,
    0,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v4[7],
    v4[8],
    v4[9],
    v4[10],
    v4[11],
    v4[12],
    v4[13],
    v4[14],
    v4[15],
    v4[16],
    v4[17],
    v4[18],
    v4[19],
    v4[20],
    v4[21],
    v4[22],
    v4[23],
    v4[24],
    v4[25],
    (void *)v4[26],
    v4[27],
    v4[28],
    v4[29],
    v4[30],
    v4[31],
    v4[32],
    v4[33],
    v4[34],
    v4[35],
    v4[36],
    v4[37],
    v4[38],
    v4[39],
    v4[40],
    v4[41],
    v4[42],
    v4[43],
    v4[44],
    v5);
  v2 = *(_DWORD *)this;
  v5 = *((_DWORD *)this + 51);
  v3 = *(void (__thiscall **)(TraceLineSystem *, int))(v2 + 32);
  *((_DWORD *)this + 51) = 0;
  v3(this, v5);
}
