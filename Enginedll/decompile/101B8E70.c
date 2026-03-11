/*
 * func-name: sub_101B8E70
 * func-address: 0x101b8e70
 * callers: 0x101b81a0
 * callees: 0x100a53a0, 0x100a5c40
 */

void __cdecl sub_101B8E70()
{
  CREEditBox::CUniBuffer::UninitializeUniscribe();
  CREIMEEditBox::UninitializeImm();
  CMLIMEEditBox::UninitializeImm();
}
