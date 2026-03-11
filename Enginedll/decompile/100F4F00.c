/*
 * func-name: ?CloneAnimations@Model@@QAEXPAV1@@Z
 * func-address: 0x100f4f00
 * callers: none
 * callees: 0x10025c40, 0x1002f5f0, 0x100f1b70
 */

void __userpurge Model::CloneAnimations(Model *this@<ecx>, int a2@<ebx>, struct Model *a3)
{
  struct ID3DXAnimationController *v4; // edi

  sub_10025C40((int)this + 380, (int)a3 + 380);
  if ( (char *)this + 408 != (char *)a3 + 408 )
    sub_1002F5F0((_DWORD *)this + 102, (int)a3 + 408);
  v4 = (struct ID3DXAnimationController *)*((_DWORD *)a3 + 94);
  if ( v4 )
    Model::InitializeAnimationSystem(this, a2, (int)v4, v4);
}
