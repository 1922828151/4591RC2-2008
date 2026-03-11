/*
 * func-name: ?OnRobotWeaponChanged@CStatusUI@@QAEXXZ_0
 * func-address: 0x1028b7d0
 * callers: 0x10003de1
 * callees: none
 */

void __thiscall CStatusUI::OnRobotWeaponChanged(CStatusUI *this)
{
  _DWORD *v2; // eax
  int v3; // ebp
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // edi
  int v10; // ecx
  CPictureLabel *ControlByIndex; // ecx
  bool v12; // zf
  struct tagRECT *p_rc; // edi
  int v14; // ecx
  int ControlCount; // ebp
  int i; // edi
  int v17; // ecx
  struct CREControl *v18; // eax
  double v19; // st7
  unsigned int v20; // [esp+18h] [ebp-58h]
  int v21; // [esp+1Ch] [ebp-54h]
  float v22; // [esp+20h] [ebp-50h]
  int v23; // [esp+24h] [ebp-4Ch]
  signed int v24; // [esp+28h] [ebp-48h]
  int v25; // [esp+2Ch] [ebp-44h]
  struct tagRECT rc; // [esp+30h] [ebp-40h] BYREF
  struct tagRECT v27; // [esp+40h] [ebp-30h] BYREF
  struct tagRECT v28; // [esp+50h] [ebp-20h] BYREF
  struct tagRECT v29; // [esp+60h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 1004) )
  {
    SetRect(&rc, 0, 0, 106, 31);
    SetRect(&v27, 0, 33, 106, 64);
    SetRect(&v28, 0, 0, 40, 31);
    SetRect(&v29, 0, 33, 40, 64);
    v2 = (_DWORD *)*((_DWORD *)this + 1004);
    v21 = v2[57];
    v3 = v2[86] + v2[87];
    v4 = 0;
    v24 = v2[86];
    v23 = v3;
    v20 = 0;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        v5 = *((_DWORD *)this + 1004);
        v6 = *(_DWORD *)(v5 + 252);
        v7 = v5 + 248;
        if ( !v6 || v4 >= (*(_DWORD *)(v7 + 8) - v6) >> 2 )
          _invalid_parameter_noinfo();
        v8 = 4 * v4;
        v9 = *(_DWORD *)(v8 + *(_DWORD *)(v7 + 4));
        v25 = v9;
        if ( v9 )
        {
          v10 = *((_DWORD *)this + 969);
          if ( !v10 || v20 >= (*((_DWORD *)this + 970) - v10) >> 2 )
            _invalid_parameter_noinfo();
          ControlByIndex = CControlBox::GetControlByIndex(*(CControlBox **)(*((_DWORD *)this + 969) + v8), 2);
          if ( ControlByIndex )
          {
            if ( (int)v20 >= v24 )
            {
              v12 = v9 == v21;
              p_rc = &v28;
              if ( !v12 )
                p_rc = &v29;
            }
            else
            {
              v12 = v9 == v21;
              p_rc = &rc;
              if ( !v12 )
                p_rc = &v27;
            }
            CPictureLabel::SetTextureRect(ControlByIndex, *p_rc);
          }
          v14 = *((_DWORD *)this + 969);
          if ( !v14 || v20 >= (*((_DWORD *)this + 970) - v14) >> 2 )
            _invalid_parameter_noinfo();
          ControlCount = CControlBox::GetControlCount(*(CControlBox **)(*((_DWORD *)this + 969) + v8));
          for ( i = 0; i < ControlCount; ++i )
          {
            if ( i != 2 )
            {
              v17 = *((_DWORD *)this + 969);
              if ( !v17 || v20 >= (*((_DWORD *)this + 970) - v17) >> 2 )
                _invalid_parameter_noinfo();
              v18 = CControlBox::GetControlByIndex(*(CControlBox **)(*((_DWORD *)this + 969) + v8), i);
              if ( v18 )
              {
                if ( v25 == v21 )
                  v19 = 1.0;
                else
                  v19 = 0.5;
                v22 = v19;
                *((float *)v18 + 132) = v22;
              }
            }
          }
          v3 = v23;
        }
        if ( (int)++v20 >= v3 )
          break;
        v4 = v20;
      }
    }
  }
}
