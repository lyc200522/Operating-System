#ifndef __THREAD_FIXED_POINT_H
#define __THREAD_FIXED_POINT_H

/* 表示变动的位数*/
#define FP_Q 14

/*Convert n to fixed point 使用*/
#define FP_FP(n) ((int)(n<<FP_Q))

/*Convert x to integer (rounding toward zero) 使用*/
#define FP_INT(x) (x>>FP_Q)

/*Add x and y 使用*/
#define FP_ADD(x,y) (x+y)

/*Subtract y from x 使用*/
#define FP_SUB(x,y) (x-y)

/*Add x and n 使用*/
#define FP_ADDN(x,n) (x+(n<<FP_Q))

/*Subtract n from x 使用*/
#define FP_SUBN(x,n) (x-(n<<FP_Q))

/*Multiply x by y 使用*/
#define FP_MUL(x,y) ((int)(((int64_t) x)*y>>FP_Q))

/*Multiply x by n 使用*/
#define FP_MULN(x,n) (x*n)

/*Divide x by y 使用*/
#define FP_DIV(x,y) ((int)((((int64_t) x) << FP_Q)/y))

/*Divide x by n 使用*/
#define FP_DIVN(x,n) (x/n)

/* Get rounded integer of a fixed-point value. */
#define FP_ROUND(x) (x>=0?((x+(1<<(FP_Q-1)))>>FP_Q):((x-(1<<(FP_Q-1)))>>FP_Q))

#endif /* thread/fixed_point.h */