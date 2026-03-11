/*
 * func-name: sub_1018F330
 * func-address: 0x1018f330
 * callers: 0x100143a3
 * callees: 0x1000bc80, 0x1001344e
 */

struct BinStream *__stdcall sub_1018F330(float a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  GameClient::EquipManager *v5; // eax
  struct BinStream *result; // eax
  struct BinStream *v7; // ebx
  unsigned int v8; // eax
  int v9; // edi
  struct BinStream *v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  int v13; // edx
  float v14; // ecx
  int v15; // edx
  double v16; // st7
  int v17; // [esp-4h] [ebp-10h]

  Stream = Event::GetStream((Event *)LODWORD(a1));
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = LODWORD(a1);
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  v17 = v4;
  v5 = GameClient::EquipManager::Instance();
  result = GameClient::EquipManager::GetSystemPart(v5, v17);
  v7 = result;
  if ( result )
  {
    v8 = Event::GetSubID((Event *)LODWORD(a1)) - 5160;
    if ( v8 )
    {
      result = (struct BinStream *)(v8 - 1);
      if ( !result )
      {
        v9 = *(_DWORD *)v7;
        v10 = Event::GetStream((Event *)LODWORD(a1));
        return (struct BinStream *)(*(int (__thiscall **)(struct BinStream *, struct BinStream *))(v9 + 16))(v7, v10);
      }
    }
    else
    {
      result = Event::GetStream((Event *)LODWORD(a1));
      v11 = *((_DWORD *)result + 3);
      v12 = *((_DWORD *)result + 2);
      v13 = v11 + 4;
      if ( v11 + 4 > v12 )
      {
        v14 = a1;
      }
      else
      {
        v14 = *(float *)(v11 + *((_DWORD *)result + 1));
        *((_DWORD *)result + 3) = v13;
      }
      v15 = *((_DWORD *)result + 3);
      if ( v15 + 4 <= v12 )
      {
        v16 = *(float *)(v15 + *((_DWORD *)result + 1));
        *((_DWORD *)result + 3) = v15 + 4;
        a1 = v16;
      }
      *((float *)v7 + 186) = v14;
      *((float *)v7 + 47) = a1;
    }
  }
  return result;
}
