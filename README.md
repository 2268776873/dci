# DCI Pattern Example Project

This project demonstrates the implementation of the Data, Context, and Interaction (DCI) architectural pattern in C++.

## Overview

The DCI pattern promotes the separation of concerns by assigning behaviors (roles) to objects (data) based on the current context (interaction). This project showcases how roles can be dynamically applied to objects to facilitate flexible and reusable code.

## Features

- **Role Definition**: Macros (`USE_ROLE`, `IMPL_ROLE`) are used to define and implement roles.
- **Role Binding**: Roles (`Game`, `Money`) can be dynamically bound to objects (`Player`, `Consumer`).
- **Example Usage**: Demonstrates how a `Player` can interact with a `Game` and manage `Money` using the DCI pattern.

当编写项目的 README 文件时，重点是清楚地介绍项目的目的、功能、安装和使用方法，以及如何贡献或报告问题。以下是一个适用于您描述的基于 DCI 架构的 C++ 项目的 README 文件模板：

---

# DCI 模式示例项目

该项目演示了如何在 C++ 中实现数据、上下文和交互（DCI）架构模式。

## 概述

DCI 模式通过将行为（角色）动态分配给对象（数据），根据当前的上下文（交互），来促进关注点的分离。本项目展示了如何将角色动态应用于对象，以实现代码的灵活和可重用性。

## 功能

- **角色定义**：使用宏（`USE_ROLE`、`IMPL_ROLE`）定义和实现角色。
- **角色绑定**：角色（`Game`、`Money`）可以动态绑定到对象（`Player`、`Consumer`）。
- **示例用法**：演示了如何使用 DCI 模式让 `Player` 与 `Game` 互动，并管理 `Money`。
