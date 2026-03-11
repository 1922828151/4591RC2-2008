/*
 * func-name: ?moveToView@CameraHandler@@QAEXMAAVVector@@AAVMatrix@@MM@Z_0
 * func-address: 0x100dd510
 * callers: 0x10011d4c
 * callees: 0x100079c8, 0x1000bcc1, 0x100143f8, 0x10014669, 0x102c17b0, 0x102c23d0, 0x102c26d0
 */

void __thiscall CameraHandler::moveToView(
        CameraHandler *this,
        float a2,
        struct Vector *a3,
        struct Matrix *a4,
        float a5,
        float a6)
{
  char *v7; // ebp
  float v8; // [esp+1Ch] [ebp-C4h]
  _BYTE v9[64]; // [esp+20h] [ebp-C0h] BYREF
  _BYTE v10[64]; // [esp+60h] [ebp-80h] BYREF
  _BYTE v11[64]; // [esp+A0h] [ebp-40h] BYREF

  CameraHandler::moveToFOV(this, a2, a6);
  *((_BYTE *)this + 420) = 1;
  v7 = (char *)this + 488;
  qmemcpy((char *)this + 488, (const void *)sub_102C23D0(v9), 0x40u);
  if ( 0.0 != a5 )
  {
    qmemcpy(v10, v7, sizeof(v10));
    sub_102C17B0(v10);
    sub_10014669(v11);
    v8 = a5 * 0.01745329300562541;
    sub_102C26D0(0.0, 0.0, v8);
    sub_100079C8((int)v11);
    qmemcpy(v9, v10, sizeof(v9));
    sub_102C17B0(v9);
    qmemcpy(v7, v9, 0x40u);
  }
  *((_DWORD *)this + 134) = *(_DWORD *)a3;
  *((_DWORD *)this + 135) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 136) = *((_DWORD *)a3 + 2);
  qmemcpy((char *)this + 616, (char *)this + 688, 0x40u);
  qmemcpy((char *)this + 552, (const void *)sub_100143F8((int)v9, (int)this + 616), 0x40u);
  *((float *)this + 170) = 0.0;
  *((float *)this + 171) = a2;
}
