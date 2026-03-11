/*
 * func-name: ?HandleMouse@CMultiLineEB@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100ae570
 * callers: 0x100c21a0
 * callees: 0x100971c0, 0x100a3050, 0x100ae230, 0x100ae290, 0x100ae4a0
 */

bool __thiscall CMultiLineEB::HandleMouse(
        CMultiLineEB *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  struct Engine *v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  bool result; // al
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // [esp-8h] [ebp-14h]
  int v14; // [esp-4h] [ebp-10h]
  int v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+8h] [ebp-4h] BYREF

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  switch ( a2 )
  {
    case 0x200u:
      if ( *((_BYTE *)this + 788) )
      {
        a2 = 0;
        v16 = 0;
        if ( CMultiLineEB::FindPoint(this, &a3, (int *)&a2, &v16) )
        {
          v10 = v16;
          if ( *((_DWORD *)this + 211) != a2 || *((_DWORD *)this + 212) != v16 )
          {
            v15 = v16;
            v14 = *((_DWORD *)this + 210);
            v13 = a2;
            *((_DWORD *)this + 211) = a2;
            v11 = *((_DWORD *)this + 209);
            *((_DWORD *)this + 212) = v10;
            CMultiLineEB::SetSelRange(this, v11, v13, v14, v15);
            v12 = *((_DWORD *)this + 212);
            *((_DWORD *)this + 204) = *((_DWORD *)this + 211);
            *((_DWORD *)this + 187) = v12;
          }
        }
      }
      return 0;
    case 0x201u:
    case 0x203u:
      if ( !*((_BYTE *)this + 92) )
        CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
      if ( !(*(int (__thiscall **)(CMultiLineEB *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
        return 0;
      *((_BYTE *)this + 788) = 1;
      v6 = Engine::Instance();
      SetCapture(*((HWND *)v6 + 35));
      if ( CMultiLineEB::FindPoint(this, &a3, &v16, (int *)&a2) )
      {
        v7 = a2;
        *((_DWORD *)this + 210) = a2;
        *((_DWORD *)this + 187) = v7;
        v8 = v16;
        *((_DWORD *)this + 209) = v16;
        *((_DWORD *)this + 204) = v8;
        CMultiLineEB::ClearAllSelect(this);
      }
      result = 1;
      break;
    case 0x202u:
      ReleaseCapture();
      *((_BYTE *)this + 788) = 0;
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
