/*
 * func-name: ?UpdateCamera@SamplePlayer@@UAEXXZ_0
 * func-address: 0x100e62d0
 * callers: 0x1001573f
 * callees: 0x1000a097, 0x1000aa9c
 */

void __thiscall SamplePlayer::UpdateCamera(SamplePlayer *this)
{
  CameraHandler *v1; // eax
  struct Vector *v2; // [esp-8h] [ebp-10h]
  struct Matrix *v3; // [esp-4h] [ebp-Ch]

  v3 = (SamplePlayer *)((char *)this + 868);
  v2 = (SamplePlayer *)((char *)this + 1052);
  v1 = CameraHandler::Instance();
  CameraHandler::setToView(v1, v2, v3, 0.0, 90.0);
}
