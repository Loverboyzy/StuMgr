/*
 Navicat Premium Data Transfer

 Source Server         : localhost_3306
 Source Server Type    : MySQL
 Source Server Version : 50713 (5.7.13)
 Source Host           : localhost:3306
 Source Schema         : qt_stumgr

 Target Server Type    : MySQL
 Target Server Version : 50713 (5.7.13)
 File Encoding         : 65001

 Date: 15/06/2025 19:34:35
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for admin
-- ----------------------------
DROP TABLE IF EXISTS `admin`;
CREATE TABLE `admin`  (
  `user` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NOT NULL,
  `pwd` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NULL DEFAULT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_german2_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of admin
-- ----------------------------
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');
INSERT INTO `admin` VALUES ('su', '1');

-- ----------------------------
-- Table structure for student
-- ----------------------------
DROP TABLE IF EXISTS `student`;
CREATE TABLE `student`  (
  `id` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NOT NULL,
  `name` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NOT NULL,
  `age` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NULL DEFAULT NULL,
  `tel` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NULL DEFAULT NULL,
  `sex` char(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NULL DEFAULT NULL,
  `college` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NULL DEFAULT NULL,
  `cls` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NULL DEFAULT NULL,
  `pwd` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_german2_ci NULL DEFAULT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_german2_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of student
-- ----------------------------
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('2330823047', '杨过', '24', '17245670023', '男', '人工智能学院', '23数据1', '2330823047');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1007', '任盈盈', '17', '15300006666', ' 男', '商学院', '市场营销一班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1006', '令狐冲', '24', '15200005555', '男', '工学院', '机械工程二班', '987987');
INSERT INTO `student` VALUES ('1007', '任盈盈', '22', '15300006666', '女', '商学院', '市场营销三班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');
INSERT INTO `student` VALUES ('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456');
INSERT INTO `student` VALUES ('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789');
INSERT INTO `student` VALUES ('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321');
INSERT INTO `student` VALUES ('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654');
INSERT INTO `student` VALUES ('1006', '令狐冲', '24', '15200005555', '男', '工学院', '机械工程二班', '987987');
INSERT INTO `student` VALUES ('1007', '任盈盈', '22', '15300006666', '女', '商学院', '市场营销三班', '210210');
INSERT INTO `student` VALUES ('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543');
INSERT INTO `student` VALUES ('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876');
INSERT INTO `student` VALUES ('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147');
INSERT INTO `student` VALUES ('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');

SET FOREIGN_KEY_CHECKS = 1;
