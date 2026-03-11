/*
 * func-name: ?doMotion@CBattleFieldDetailUI@@MAEXM@Z_0
 * func-address: 0x10255330
 * callers: 0x100142b3
 * callees: 0x10009fcf, 0x1001a5cd, 0x102c9fe0
 */

void __thiscall CBattleFieldDetailUI::doMotion(CBattleFieldDetailUI *this, float a2)
{
  int v3; // ecx
  double v4; // st7
  int v5; // edx
  int i; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  int v10; // edx
  double v11; // st7
  unsigned int v12; // edi
  unsigned int v13; // ecx
  char *v14; // ebx
  char *v15; // edi
  int v16; // eax
  char *v17; // ebp
  int v18; // ecx
  float v19; // [esp+18h] [ebp-4h]
  float v20; // [esp+18h] [ebp-4h]

  if ( *((_BYTE *)this + 3892) )
  {
    v3 = *((_DWORD *)this + 979);
    v4 = *(float *)&GSeconds - *((float *)this + 974);
    if ( v4 <= 0.5 )
    {
      v19 = v4 + v4;
      v8 = (int)((double)(v3 - 10) * v19 + 10.0);
      v9 = (int)((double)(*((_DWORD *)this + 980) - 10) * v19 + 10.0);
      v10 = *((_DWORD *)this + 978);
      *((_DWORD *)this + 173) = (int)((double)(*((_DWORD *)this + 977) - *((_DWORD *)this + 975)) * v19
                                    + (double)*((int *)this + 975));
      *((_DWORD *)this + 174) = (int)(v19 * (double)(v10 - *((_DWORD *)this + 976)) + (double)*((int *)this + 976));
      CTYDialog::MoveNestedDialog(this);
      *((_DWORD *)this + 175) = v8;
      *((_DWORD *)this + 176) = v9;
      CBattleFieldDetailUI::MoveEdgeLine(this);
    }
    else
    {
      v5 = *((_DWORD *)this + 980);
      *((_DWORD *)this + 175) = v3;
      *((_BYTE *)this + 3892) = 0;
      *((_DWORD *)this + 176) = v5;
      CTYDialog::CenterDialog(this, 1, 1);
      for ( i = 0; i < *((_DWORD *)this + 192); ++i )
      {
        v7 = *(_DWORD *)(*((_DWORD *)this + 191) + 4 * i);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 136))(v7, 1);
      }
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 969) + 160))(
        *((_DWORD *)this + 969),
        *((_DWORD *)this + 175),
        *((_DWORD *)this + 176));
      CBattleFieldDetailUI::MoveEdgeLine(this);
      CBattleFieldDetailUI::ReposControl(this);
      *((_BYTE *)this + 3893) = 1;
      *((float *)this + 974) = *(float *)&GSeconds;
    }
  }
  if ( *((_BYTE *)this + 3893) )
  {
    v11 = *(float *)&GSeconds - *((float *)this + 974);
    v12 = 0;
    if ( v11 <= 0.5 )
    {
      while ( 1 )
      {
        v18 = *((_DWORD *)this + 995);
        if ( !v18 || v12 >= (*((_DWORD *)this + 996) - v18) >> 2 )
          break;
        v20 = v11 + v11;
        *(float *)(*(_DWORD *)(*((_DWORD *)this + 995) + 4 * v12++) + 528) = v20;
      }
    }
    else
    {
      *((_BYTE *)this + 3893) = 1;
      while ( 1 )
      {
        v13 = *((_DWORD *)this + 995);
        if ( !v13 || v12 >= (int)(*((_DWORD *)this + 996) - v13) >> 2 )
          break;
        *(float *)(*(_DWORD *)(*((_DWORD *)this + 995) + 4 * v12++) + 528) = 1.0;
      }
      v14 = (char *)*((_DWORD *)this + 996);
      if ( v13 > (unsigned int)v14 )
        _invalid_parameter_noinfo();
      v15 = (char *)*((_DWORD *)this + 995);
      if ( (unsigned int)v15 > *((_DWORD *)this + 996) )
        _invalid_parameter_noinfo();
      if ( v15 != v14 )
      {
        v16 = (*((_DWORD *)this + 996) - (int)v14) >> 2;
        v17 = &v15[4 * v16];
        if ( v16 > 0 )
          memmove_s(v15, 4 * v16, v14, 4 * v16);
        *((_DWORD *)this + 996) = v17;
      }
    }
  }
  CTYDialog::doMotion(this, a2);
}
