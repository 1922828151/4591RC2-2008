/*
 * func-name: sub_100D3B80
 * func-address: 0x100d3b80
 * callers: 0x10019a7e
 * callees: 0x10002f7c, 0x1000ae2a, 0x1000bf05, 0x1000ea57, 0x10014669, 0x102c26d0
 */

int __thiscall sub_100D3B80(int this, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  double v8; // st7
  float v9; // [esp+18h] [ebp-90h]
  _BYTE v10[12]; // [esp+1Ch] [ebp-8Ch] BYREF
  _BYTE v11[64]; // [esp+28h] [ebp-80h] BYREF
  _BYTE v12[64]; // [esp+68h] [ebp-40h] BYREF

  result = *(_DWORD *)(this + 8);
  v4 = *(_DWORD *)(result + 4);
  if ( *(_BYTE *)v4 )
  {
    *(float *)(this + 144) = *(float *)(v4 + 4);
    *(float *)(this + 148) = *(float *)(v4 + 8);
    *(float *)(this + 152) = *(float *)(v4 + 12);
    *(float *)(this + 156) = *(float *)(v4 + 16);
    *(float *)(this + 160) = *(float *)(v4 + 20);
    *(float *)(this + 164) = *(float *)(v4 + 24);
    result = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 8) + 68))(*(_DWORD *)(this + 8), v10);
    *(float *)(this + 168) = *(float *)result;
    *(float *)(this + 172) = *(float *)(result + 4);
    *(float *)(this + 176) = *(float *)(result + 8);
    *(_BYTE *)(this + 140) = 1;
    *(_BYTE *)v4 = 0;
  }
  else
  {
    *(_BYTE *)(this + 140) = 0;
  }
  if ( *(_DWORD *)(this + 28) )
  {
    qmemcpy((void *)(*(_DWORD *)(this + 28) + 292), (const void *)sub_10014669(v11), 0x40u);
    sub_102C26D0(*(float *)(this + 112), *(float *)(this + 116), *(float *)(this + 120));
    result = *(_DWORD *)(this + 28) + 340;
    *(_DWORD *)result = *(_DWORD *)(this + 124);
    *(_DWORD *)(result + 4) = *(_DWORD *)(this + 128);
    *(_DWORD *)(result + 8) = *(_DWORD *)(this + 132);
  }
  if ( *(_DWORD *)(this + 24) )
  {
    qmemcpy((void *)(*(_DWORD *)(this + 24) + 292), (const void *)sub_10014669(v11), 0x40u);
    sub_102C26D0(*(float *)(this + 88), *(float *)(this + 92), *(float *)(this + 96));
    result = *(_DWORD *)(this + 24) + 340;
    *(_DWORD *)result = *(_DWORD *)(this + 100);
    *(_DWORD *)(result + 4) = *(_DWORD *)(this + 104);
    *(_DWORD *)(result + 8) = *(_DWORD *)(this + 108);
  }
  if ( *(_DWORD *)(this + 184) )
  {
    result = sub_1000BF05();
    if ( result )
    {
      v5 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*(_DWORD *)(this + 4) + 4) + 44))(
             *(_DWORD *)(*(_DWORD *)(this + 4) + 4),
             v11);
      v6 = NxHelper::ToMatrix(v12, v5);
      sub_10002F7C(v6);
      v7 = NxHelper::ToVector(v10, this + 144);
      sub_1000AE2A(v7);
      if ( *(_BYTE *)(this + 140) )
        v8 = *(float *)(this + 180);
      else
        v8 = 0.0;
      v9 = v8;
      return sub_1000EA57(v9);
    }
  }
  return result;
}
