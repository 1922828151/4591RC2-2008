/*
 * func-name: ?FlashBuff@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028c090
 * callers: 0x10009061
 * callees: 0x102c9fe0
 */

void __thiscall CStatusUI::FlashBuff(CStatusUI *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // ebx
  double v6; // st7
  double v7; // st7
  int v8; // eax
  double v9; // st7
  float v10; // [esp+10h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 989);
    if ( !v3 || i >= (*((_DWORD *)this + 990) - v3) >> 2 )
      break;
    v4 = *((_DWORD *)this + 997);
    v5 = *(_DWORD *)(*((_DWORD *)this + 989) + 4 * i);
    if ( !v4 || i >= (*((_DWORD *)this + 998) - v4) >> 2 )
      _invalid_parameter_noinfo();
    v6 = *(float *)&GSeconds - *(float *)(*((_DWORD *)this + 997) + 4 * i);
    v10 = v6 + v6;
    v7 = v10;
    v8 = (int)v10;
    if ( v8 % 2 )
      v9 = v7 - (double)v8;
    else
      v9 = (double)(v8 + 1) - v7;
    *(_DWORD *)(v5 + 564) = ((int)(v9 * 255.0) << 24) | 0xFFFFFF;
  }
}
