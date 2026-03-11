/*
 * func-name: sub_10012140
 * func-address: 0x10012140
 * callers: 0x100126b0
 * callees: 0x10004500
 */

bool __thiscall sub_10012140(int this, int a2, float *a3)
{
  double v4; // st7
  double v5; // st5
  double v6; // st6
  double v7; // st7
  int v8; // edi
  int v9; // eax
  int v10; // ebx

  *(_DWORD *)(this + 88) = a2;
  *(_DWORD *)(this + 92) = a2 * a2;
  v4 = (double)(unsigned int)(a2 - 1);
  *(float *)(this + 96) = v4;
  *(float *)(this + 100) = 1.0 / v4;
  *(float *)(this + 4) = *a3;
  *(float *)(this + 8) = a3[1];
  *(float *)(this + 12) = a3[2];
  *(float *)(this + 16) = a3[3];
  *(float *)(this + 20) = a3[4];
  *(float *)(this + 24) = a3[5];
  *(float *)(this + 28) = *(float *)(this + 16) + *(float *)(this + 4);
  *(float *)(this + 32) = *(float *)(this + 20) + *(float *)(this + 8);
  *(float *)(this + 36) = *(float *)(this + 24) + *(float *)(this + 12);
  *(float *)(this + 28) = *(float *)(this + 28) * 0.5;
  *(float *)(this + 32) = *(float *)(this + 32) * 0.5;
  *(float *)(this + 36) = *(float *)(this + 36) * 0.5;
  *(float *)(this + 40) = *(float *)(this + 16) - *(float *)(this + 4);
  *(float *)(this + 44) = *(float *)(this + 20) - *(float *)(this + 8);
  *(float *)(this + 48) = *(float *)(this + 24) - *(float *)(this + 12);
  *(float *)(this + 40) = *(float *)(this + 40) * 0.5;
  *(float *)(this + 44) = *(float *)(this + 44) * 0.5;
  *(float *)(this + 48) = 0.5 * *(float *)(this + 48);
  v5 = *(float *)(this + 20) - *(float *)(this + 8);
  v6 = *(float *)(this + 24) - *(float *)(this + 12);
  *(float *)(this + 52) = *(float *)(this + 16) - *(float *)(this + 4);
  *(float *)(this + 56) = v5;
  *(float *)(this + 60) = v6;
  *(float *)(this + 64) = *(float *)(this + 96) / *(float *)(this + 52);
  *(float *)(this + 68) = *(float *)(this + 96) / *(float *)(this + 56);
  *(float *)(this + 72) = *(float *)(this + 96) / *(float *)(this + 60);
  v7 = 1.0 / *(float *)(this + 96);
  *(float *)(this + 76) = *(float *)(this + 52) * v7;
  v8 = a2 * a2 * a2;
  *(float *)(this + 80) = *(float *)(this + 56) * v7;
  *(float *)(this + 84) = v7 * *(float *)(this + 60);
  *(_DWORD *)(this + 104) = v8;
  v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
         dword_100580A0,
         (unsigned __int64)(unsigned int)v8 >> 30 != 0 ? -1 : 4 * v8,
         293);
  v10 = v9;
  if ( v9 )
  {
    sub_10004500(v9, 4, v8, (int (__thiscall *)(int))sub_1000FD90);
    *(_DWORD *)(this + 108) = v10;
    return v10 != 0;
  }
  else
  {
    *(_DWORD *)(this + 108) = 0;
    return 0;
  }
}
