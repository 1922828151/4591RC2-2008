/*
 * func-name: ?doMotion@CGroupMemberUI@@MAEXM@Z_0
 * func-address: 0x10271360
 * callers: 0x100121fc
 * callees: 0x1000121c, 0x102c9fe0
 */

void __thiscall CGroupMemberUI::doMotion(CGroupMemberUI *this, float a2)
{
  unsigned int v2; // ebp
  int i; // ebx
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // esi
  int v9; // eax
  double v10; // st7
  int v11; // eax
  bool v12; // zf
  signed int v13; // eax
  double v14; // st7
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]
  int v17; // [esp+18h] [ebp-4h]
  float v18; // [esp+18h] [ebp-4h]

  v2 = 0;
  for ( i = 0; ; i += 80 )
  {
    v5 = *((_DWORD *)this + 969);
    v6 = 1.0;
    if ( !v5 || v2 >= (*((_DWORD *)this + 970) - v5) / 80 )
      break;
    v7 = *((_DWORD *)this + 969);
    v15 = a2 * 200.0;
    if ( !v7 || v2 >= (*((_DWORD *)this + 970) - v7) / 80 )
    {
      _invalid_parameter_noinfo();
      v6 = 1.0;
    }
    v8 = i + *((_DWORD *)this + 969);
    if ( *(_BYTE *)(v8 + 1) )
    {
      if ( *(float *)(v8 + 8) >= (double)*(float *)&GSeconds )
      {
        v16 = (*(float *)&GSeconds - *(float *)(v8 + 4)) / *(float *)(v8 + 12);
        v10 = v16;
        v11 = (int)v16;
        v17 = v11;
        v13 = v11 & 0x80000001;
        v12 = v13 == 0;
        if ( v13 < 0 )
          v12 = (((_BYTE)v13 - 1) | 0xFFFFFFFE) == -1;
        v14 = v10 - (double)v17;
        if ( v12 )
          v18 = 1.0 - v14;
        else
          v18 = v14;
        *(float *)(*(_DWORD *)(v8 + 24) + 528) = v18;
        *(float *)(*(_DWORD *)(v8 + 20) + 528) = v18;
        *(float *)(*(_DWORD *)(v8 + 36) + 528) = v18;
        *(float *)(*(_DWORD *)(v8 + 32) + 528) = v18;
        *(float *)(*(_DWORD *)(v8 + 28) + 528) = v18;
      }
      else
      {
        v9 = *(_DWORD *)(v8 + 24);
        *(_BYTE *)(v8 + 1) = 0;
        *(float *)(v9 + 528) = v6;
        *(float *)(*(_DWORD *)(v8 + 20) + 528) = v6;
        *(float *)(*(_DWORD *)(v8 + 36) + 528) = v6;
        *(float *)(*(_DWORD *)(v8 + 32) + 528) = v6;
        *(float *)(*(_DWORD *)(v8 + 28) + 528) = v6;
      }
    }
    if ( !*(_BYTE *)v8 && !*(_BYTE *)(v8 + 1) )
      v15 = v15 * -1.0;
    CGroupMemberUI::MoveGroup(this, (struct CGroupMemberUI::MemberControl *)v8, v15);
    ++v2;
  }
  CTYDialog::doMotion(this, a2);
}
