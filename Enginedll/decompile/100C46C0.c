/*
 * func-name: ?HandleMouse@CHotZonePic@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100c46c0
 * callers: none
 * callees: 0x10019470, 0x100a93f0, 0x100c4500
 */

bool __thiscall CHotZonePic::HandleMouse(
        CHotZonePic *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  int v6; // ebx
  int v7; // edi
  bool result; // al
  int v9; // ecx
  void (__stdcall *v10)(int, int, _DWORD, CHotZonePic *, int, _DWORD); // edx
  int v11; // eax
  int v12; // ecx
  LONG v13; // edi
  LONG v14; // ebx
  bool v15; // zf
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  void (__stdcall *v21)(int, int, _DWORD, CHotZonePic *, int, int); // edx
  int v22; // ecx
  void (__stdcall *v23)(int, int, _DWORD, CHotZonePic *, int, _DWORD); // edx
  LONG v24; // edi
  LONG v25; // ebx
  int v26; // eax
  int v27; // edx
  int v28; // edi
  int v29; // ecx
  int v30; // eax
  void (__stdcall *v31)(int, int, _DWORD, CHotZonePic *, int, int); // edx
  int v32; // ecx
  void (__stdcall *v33)(int, int, _DWORD, CHotZonePic *, int, _DWORD); // edx
  int v34; // eax
  int v35; // ecx
  void (__stdcall *v36)(int, int, _DWORD, CHotZonePic *, int, _DWORD); // edx

  switch ( a2 )
  {
    case 0x200u:
      if ( *((_BYTE *)this + 626) )
      {
        v6 = a3.y - *((_DWORD *)this + 42);
        v7 = a3.x - *((_DWORD *)this + 41);
        CHotZonePic::CalcDragedRect(this, *(struct tagPOINT *)((char *)this + 628), (struct tagPOINT)__PAIR64__(v6, v7));
        *((_DWORD *)this + 157) = v7;
        *((_DWORD *)this + 158) = v6;
        goto LABEL_4;
      }
      v9 = *((_DWORD *)this + 28);
      v10 = *(void (__stdcall **)(int, int, _DWORD, CHotZonePic *, int, _DWORD))(v9 + 736);
      if ( v10 )
        v10(v9, 4353, *((_DWORD *)this + 34), this, LOWORD(a3.x) | (LOWORD(a3.y) << 16), 0);
      result = 1;
      break;
    case 0x201u:
      if ( *((_BYTE *)this + 625) )
      {
        v11 = a3.x - *((_DWORD *)this + 41);
        v12 = a3.y - *((_DWORD *)this + 42);
        *((_DWORD *)this + 157) = v11;
        result = 1;
        *((_DWORD *)this + 158) = v12;
        *((_BYTE *)this + 626) = 1;
      }
      else
      {
LABEL_4:
        result = 1;
      }
      break;
    case 0x202u:
      v13 = a3.x - *((_DWORD *)this + 41);
      v14 = a3.y - *((_DWORD *)this + 42);
      v15 = *((_BYTE *)this + 624) == 0;
      *((_BYTE *)this + 626) = 0;
      a3.x = v13;
      a3.y = v14;
      *((_DWORD *)this + 135) = -1;
      if ( !v15 )
        *((_DWORD *)this + 135) = CHotZonePic::CheckHotZone((CREDialog **)this, &a3);
      if ( *((_DWORD *)this + 135) == -1 )
      {
        v22 = *((_DWORD *)this + 28);
        v23 = *(void (__stdcall **)(int, int, _DWORD, CHotZonePic *, int, _DWORD))(v22 + 736);
        if ( v23 )
          v23(v22, 513, *((_DWORD *)this + 34), this, (unsigned __int16)v13 | ((unsigned __int16)v14 << 16), 0);
      }
      else
      {
        v16 = std::vector<Model *>::operator[]((_DWORD *)this + 136, *((_DWORD *)this + 135));
        v17 = (unsigned __int16)v13;
        v18 = *(_DWORD *)(*(_DWORD *)v16 + 40);
        v19 = *((_DWORD *)this + 28);
        v20 = v17 | ((unsigned __int16)v14 << 16);
        v21 = *(void (__stdcall **)(int, int, _DWORD, CHotZonePic *, int, int))(v19 + 736);
        if ( v21 )
        {
          v21(v19, 4352, *((_DWORD *)this + 34), this, v18, v20);
          return 1;
        }
      }
      result = 1;
      break;
    case 0x203u:
      v24 = a3.x - *((_DWORD *)this + 41);
      v25 = a3.y - *((_DWORD *)this + 42);
      v15 = *((_BYTE *)this + 624) == 0;
      *((_BYTE *)this + 626) = 0;
      a3.x = v24;
      a3.y = v25;
      *((_DWORD *)this + 135) = -1;
      if ( !v15 )
        *((_DWORD *)this + 135) = CHotZonePic::CheckHotZone((CREDialog **)this, &a3);
      if ( *((_DWORD *)this + 135) == -1 )
      {
        v32 = *((_DWORD *)this + 28);
        v33 = *(void (__stdcall **)(int, int, _DWORD, CHotZonePic *, int, _DWORD))(v32 + 736);
        if ( v33 )
          v33(v32, 515, *((_DWORD *)this + 34), this, (unsigned __int16)v24 | ((unsigned __int16)v25 << 16), 0);
      }
      else
      {
        v26 = std::vector<Model *>::operator[]((_DWORD *)this + 136, *((_DWORD *)this + 135));
        v27 = (unsigned __int16)v24;
        v28 = *(_DWORD *)(*(_DWORD *)v26 + 40);
        v29 = *((_DWORD *)this + 28);
        v30 = v27 | ((unsigned __int16)v25 << 16);
        v31 = *(void (__stdcall **)(int, int, _DWORD, CHotZonePic *, int, int))(v29 + 736);
        if ( v31 )
        {
          v31(v29, 4355, *((_DWORD *)this + 34), this, v28, v30);
          return 1;
        }
      }
      result = 1;
      break;
    case 0x204u:
      v34 = (unsigned __int16)(LOWORD(a3.x) - *((_WORD *)this + 82))
          | ((unsigned __int16)(LOWORD(a3.y) - *((_WORD *)this + 84)) << 16);
      v35 = *((_DWORD *)this + 28);
      v36 = *(void (__stdcall **)(int, int, _DWORD, CHotZonePic *, int, _DWORD))(v35 + 736);
      if ( v36 )
        v36(v35, 4354, *((_DWORD *)this + 34), this, v34, 0);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
