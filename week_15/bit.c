/**
 * 位运算
 *
 * &
 *
 * 让某一位或者某些位为0:
 *     x & 0xFE
 *        x = 1010 1001
 *     0xFE = 1111 1110
 *     将最低位置零其余不变
 * 取一个数中的一段:
 *     x & 0xFF
 *     int 32:
 *        x = xxxx xxxx xxxx xxxx
 *     0xFF = 0000 0000 0000 1111
 *     取下最后一个字节
 *
 * |
 *
 * 使一位或者几位为1:
 *     x | 0x01
 *        x = 1010 1001
 *     0x01 = 0000 0001
 *     将最低位置1
 * 把两个数拼起来:
 *   0x00FF = 0000 0000 1111 1111
 *   0xFF00 = 1111 1111 0000 0000
 *
 * ~
 *
 * 取反
 *
 * 逻辑运算 = 先转换为 1/0, 后进行位运算
 *
 * ^
 *
 * 异或
 * x == y, x ^ y = 0, x != y, x ^ y = 1
 * x ^ y ^ y = x
 * 若 x == y, x ^ y = 0
 */

/**
 * i << j
 * i中所有位向左移动j个位置,右边填0
 * 所有小于int的类型,移位以int方式来做,结果是int
 * x << n = x *= 2^n
 *
 * i >> j
 * unsigned, 左边填0
 * signed,左边填原来的最高位,保持符合不变
 * x >> n = x /= 2^n
 *
 * x << -n  // 这是未定义的行为
 */

/**
 * 位段
 * 略看了一下,啥都没记住
 */