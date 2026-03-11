/*
 * func-name: sub_10137150
 * func-address: 0x10137150
 * callers: 0x10017f08
 * callees: 0x1000a466, 0x102c9d98
 */

HookEsbProduce *__stdcall sub_10137150(struct World *a1)
{
  HookEsbProduce *v1; // eax

  v1 = (HookEsbProduce *)operator new(0x4F4u);
  if ( v1 )
    return HookEsbProduce::HookEsbProduce(v1, a1);
  else
    return 0;
}
