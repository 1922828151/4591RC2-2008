/*
 * func-name: ?updateDestView@CameraHandler@@QAEXAAVVector@@AAVMatrix@@MM@Z_0
 * func-address: 0x100dd670
 * callers: 0x10016487
 * callees: 0x1000aa9c, 0x10011d4c
 */

void __thiscall CameraHandler::updateDestView(
        CameraHandler *this,
        struct Vector *a2,
        struct Matrix *a3,
        float a4,
        float a5)
{
  float v6; // [esp+24h] [ebp+10h]

  if ( *((_BYTE *)this + 420) )
  {
    v6 = *((float *)this + 171) - *((float *)this + 170);
    CameraHandler::moveToView(this, v6, a2, a3, a4, a5);
  }
  else
  {
    CameraHandler::setToView(this, a2, a3, a4, a5);
  }
}
