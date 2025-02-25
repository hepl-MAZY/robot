# 📌 GitHub Workflows Guide for Our Project

This guide explains how to use GitHub workflows and the proper way to collaborate on the **line-following robot project**.

---

## 🚀 **Git Workflow (Simple Version - Work on `dev` Only)**

To keep things simple, we will all **work directly on the `dev` branch** instead of creating separate feature branches.

### **📌 Steps to Follow Before Working**

1️⃣ **Fetch the latest changes from GitHub** (to check for updates):

```sh
git fetch origin
```

**VS Code Click Version:** Click **"🔄 Fetch"** in the Source Control panel.

2️⃣ **Pull the latest `dev` branch to get the most recent code:**

```sh
git checkout dev
git pull origin dev
```

**VS Code Click Version:**

- Click on the branch name (bottom left corner) → Select `dev`.
- Click **"⬇️ Pull"** in the Source Control panel.

Now, you're ready to start coding!

---

### **📌 Making and Pushing Changes**

After making changes in the code:

1️⃣ **Stage and commit your work:**

```sh
git add .
git commit -m "Description of what you changed"
```

**VS Code Click Version:**

- Go to the **Source Control Panel** (Ctrl+Shift+G).
- Click **"+" (Stage All Changes)**.
- Type your commit message and click **"✔️ Commit"**.

2️⃣ **Push your changes to GitHub:**

```sh
git push origin dev
```

**VS Code Click Version:** Click **"⬆️ Push"** in the Source Control panel.

🔹 This updates the `dev` branch with your changes so your partner can see them.

---

### **📌 How to Avoid Conflicts When Working Together**

If both you and your partner are working on the project **at the same time**, follow these steps to prevent Git conflicts:

1️⃣ **Before you start coding, always pull the latest changes:**

```sh
git pull origin dev
```

**VS Code Click Version:** Click **"⬇️ Pull"** before making any changes.

2️⃣ **If you get a merge conflict, resolve it manually in VS Code.**

- Open the conflicting file.
- Choose which version to keep.
- Save the file.
- Run:
  ```sh
  git add .
  git commit -m "Resolved merge conflict"
  git push origin dev
  ```
  **VS Code Click Version:**
- Use the **GitLens extension** to view conflicts.
- Click **"Accept Incoming"** or **"Accept Current"**.
- Commit and push as usual.

---

## 📌 **What is `.github/workflows/` and Why Do We Have It?**

This folder contains **GitHub Actions workflows**, which automate testing to make sure our Arduino code compiles correctly.

### **📌 What Happens Automatically?**

Every time we **push to `dev`**, GitHub automatically:
✅ **Checks if the Arduino code compiles correctly**
✅ **Sends a notification if there is an error**
✅ **Prevents us from merging broken code into `main`**

### **📌 How to Check if Your Code Passed the Test?**

1. Go to **GitHub → Actions Tab**.
2. If the workflow shows a ✅, your code is fine.
3. If it shows ❌, click on the failed job to see the error.

---

## 📌 **Merging `dev` into `main` (Final Step)**

Once everything is tested and working, we merge `dev` into `main` to update the stable version.

1️⃣ **Switch to `main` branch and pull latest updates:**

```sh
git checkout main
git pull origin main
```

**VS Code Click Version:** Click the branch name (bottom left corner) → Select `main` → Click **"⬇️ Pull"**.

2️⃣ **Merge `dev` into `main`:**

```sh
git merge dev
git push origin main
```

**VS Code Click Version:**

- Click **"Source Control"** panel.
- Click **"Merge Branch"** → Select `dev`.
- Click **"Push"**.

🔹 Now, the latest tested code is in `main`! 🎉

---

## 📌 **Summary: Simple Git Workflow**

1. **Before starting work:** `git pull origin dev` (or click **"⬇️ Pull"**)
2. **After making changes:** `git add .` → `git commit -m "message"` (or use **"✔️ Commit"** button)
3. **Push to GitHub:** `git push origin dev` (or click **"⬆️ Push"**)
4. **Check GitHub Actions for errors (optional).**
5. **When ready, merge `dev` → `main`.**

🚀 **Now we have a simple and efficient workflow!** Let me know if you have any questions. 😃
