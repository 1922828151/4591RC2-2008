/*
 * func-name: ?setToView@CameraHandler@@QAEXAAVVector@@AAVMatrix@@MM@Z_0
 * func-address: 0x100dd3d0
 * callers: 0x1000aa9c
 * callees: 0x100079c8, 0x10014669, 0x102c17b0, 0x102c23d0, 0x102c26d0
 */

void __thiscall CameraHandler::setToView(CameraHandler *this, struct Vector *a2, struct Matrix *a3, float a4, float a5)
{
  char *v6; // ebp
  float v7; // [esp+1Ch] [ebp-C4h]
  _BYTE v8[64]; // [esp+20h] [ebp-C0h] BYREF
  _BYTE v9[64]; // [esp+60h] [ebp-80h] BYREF
  _BYTE v10[64]; // [esp+A0h] [ebp-40h] BYREF

  if ( *((_BYTE *)this + 421) )
  {
    if ( *((float *)this + 109) != a5 )
    {
      *((float *)this + 188) = a5;
      *((_BYTE *)this + 421) = 0;
    }
  }
  else
  {
    *((float *)this + 188) = a5;
  }
  *((_BYTE *)this + 420) = 0;
  v6 = (char *)this + 688;
  qmemcpy((char *)this + 688, (const void *)sub_102C23D0(v9), 0x40u);
  if ( 0.0 != a4 )
  {
    qmemcpy(v8, v6, sizeof(v8));
    sub_102C17B0(v8);
    sub_10014669(v10);
    v7 = a4 * 0.01745329300562541;
    sub_102C26D0(0.0, 0.0, v7);
    sub_100079C8((int)v10);
    qmemcpy(v9, v8, sizeof(v9));
    sub_102C17B0(v9);
    qmemcpy(v6, v9, 0x40u);
  }
  *((_DWORD *)this + 184) = *(_DWORD *)a2;
  *((_DWORD *)this + 185) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 186) = *((_DWORD *)a2 + 2);
}
