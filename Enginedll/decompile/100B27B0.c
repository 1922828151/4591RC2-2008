/*
 * func-name: ?Tick@C3DModel@@UAEXXZ
 * func-address: 0x100b27b0
 * callers: none
 * callees: 0x1000bc40, 0x100d5bd0, 0x100d6d20, 0x100dad30, 0x100db0e0, 0x10178840
 */

void __thiscall C3DModel::Tick(C3DModel *this)
{
  Input *v2; // eax
  GUISystem *v3; // eax
  int v4; // edx
  LONG x; // eax
  LONG y; // ecx
  GUISystem *v7; // eax
  double v8; // st7
  LONG v9; // ecx
  int v10; // [esp+4h] [ebp-5Ch]
  POINT v11; // [esp+4h] [ebp-5Ch]
  struct tagPOINT v12; // [esp+10h] [ebp-50h] BYREF
  struct tagPOINT v13; // [esp+18h] [ebp-48h] BYREF
  float v14[16]; // [esp+20h] [ebp-40h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(C3DModel *))(*(_DWORD *)this + 140))(this) )
    return;
  if ( *((_BYTE *)this + 1057) )
  {
    v10 = *((_DWORD *)this + 267);
    v2 = Input::Instance();
    if ( Input::ControlDown(v2, v10, 0) )
    {
      if ( *((_BYTE *)this + 1058) )
        goto LABEL_10;
      v3 = GUISystem::Instance();
      GUISystem::GetLogicMousePos(v3, &v12);
      v4 = *((_DWORD *)this + 28);
      v11.y = v12.y - *(_DWORD *)(v4 + 696);
      v11.x = v12.x - *(_DWORD *)(v4 + 692);
      if ( PtInRect((const RECT *)((char *)this + 164), v11) )
      {
        x = v12.x;
        y = v12.y;
        *((_BYTE *)this + 1058) = 1;
        *((_DWORD *)this + 265) = x;
        *((_DWORD *)this + 266) = y;
      }
    }
    else
    {
      if ( !*((_BYTE *)this + 1058) )
        goto LABEL_12;
      *((_BYTE *)this + 1058) = 0;
    }
  }
  if ( *((_BYTE *)this + 1058) )
  {
LABEL_10:
    if ( *((_DWORD *)this + 270) )
    {
      v7 = GUISystem::Instance();
      GUISystem::GetLogicMousePos(v7, &v13);
      v8 = *((float *)this + 269);
      v12.x = v13.x - *((_DWORD *)this + 265);
      *((float *)this + 269) = v8 - (double)v12.x * *((float *)this + 268);
      sub_1000BC40(v14);
      sub_10178840(*((float *)this + 269));
      (*(void (__stdcall **)(float *, int))(**((_DWORD **)this + 270) + 32))(v14, *((_DWORD *)this + 270) + 856);
      v9 = v13.y;
      *((_DWORD *)this + 265) = v13.x;
      *((_DWORD *)this + 266) = v9;
    }
  }
LABEL_12:
  if ( *((_DWORD *)this + 133) )
  {
    if ( *((_BYTE *)this + 1056) && *((_DWORD *)this + 270) )
    {
      if ( (dword_11240B14 & 1) == 0 )
      {
        dword_11240B14 |= 1u;
        flt_11240B10 = GSeconds;
      }
      *(float *)&v12.x = (GSeconds - flt_11240B10) * *((float *)this + 263);
      sub_1000BC40(v14);
      sub_10178840(*(float *)&v12.x);
      (*(void (__stdcall **)(float *, int))(**((_DWORD **)this + 270) + 32))(v14, *((_DWORD *)this + 270) + 856);
    }
    TextureCamera::RenderNow(*((TextureCamera **)this + 133));
  }
}
